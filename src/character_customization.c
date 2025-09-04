#include "global.h"
#include "palette.h"
#include "util.h"
#include "character_customization.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "task.h"
#include "constants/rgb.h"


#define MALE_SKINTONE_START         1
#define MALE_SKINTONE_END           4
#define MALE_MAIN_CLOTHES_START     5	
#define MALE_MAIN_CLOTHES_END       8	
#define MALE_ACCESSORY_1_START      10	
#define MALE_ACCESSORY_1_END        11	
#define MALE_ACCESSORY_2_START      12	
#define MALE_ACCESSORY_2_END        13
#define FEMALE_SKINTONE_START       1
#define FEMALE_SKINTONE_END         3
#define FEMALE_MAIN_CLOTHES_START   12	
#define FEMALE_MAIN_CLOTHES_END     13	
#define FEMALE_ACCESSORY_START      8	
#define FEMALE_ACCESSORY_END        10	
#define FEMALE_HAIR_START           4	
#define FEMALE_HAIR_END             6	

static s8 DarkenColorByMargin(s8 colorToDarken, s8 referenceColor, u8 modifier);
static u16 GetCustomizedColor(u8 item, u8 i, u8 x);
static bool8 ClothingItemHasDarkerColor(u8 item);
static bool8 ClothingItemHasDarkestColor(u8 item);


const struct OutfitInfo gMaleOutfitItems[] = {
	[CUSTOMIZATION_OUTFIT_EMERALD] = {
		.name = _("Esmeralda"),
		// .graphicsId = ;
		.skintone = {1,4},
		.main = {5,8},
		.highlight1 = {10,11},
		.highlight2 = {12,13},
	},
};

const struct OutfitInfo gFemaleOutfitItems[] = {
	[CUSTOMIZATION_OUTFIT_EMERALD] = {
		.name = _("Esmeralda"),
		// .graphicsId = ;
		.skintone = {1,2},
		.main = {12,13},
		.highlight1 = {8,10},
		.highlight2 = {4,6},
	},
};

// #if GAME_LANGUAGE == LANGUAGE_SPANISH
const struct ClothingInfo gClothingItems[] = {
	// ejemplo

	[CUSTOMIZATION_CRYSTAL_BLUE] = 
	{
		.name = _("Cristal Azul"),
		.light = RGB2GBA(30,120,165),
		// as we want it to be crystal-like, shadows will be lighter
		// como queremos que sea cristal, la sombra será mas clara
		.medium = RGB2GBA(60,175,215),
		// we will set up the darker tones so the outline and darker shadows match and have a hue shift
		// agregaremos los tonos oscuros para que el contorno y sombra mas oscura combinen y tengan un "hue shift"
		.dark = RGB2GBA(25,220,220),
		// darkest is outline, mostly // darkest es mayormente el contorno
		.darkest = RGB2GBA(140,220,220),
	},
	

	
	// skintone
	[CUSTOMIZATION_SKINTONE_PALE_SKIN] = 
	{
		.name = _("Blanca"),
		.light = RGB2GBA(255,220,205),
		.medium = RGB2GBA(220,160,150),
		.dark = RGB2GBA(205,130,115),
		.darkest = RGB2GBA(123,65,65),
	},
	[CUSTOMIZATION_SKINTONE_LIGHT_SKIN] = 
	{
		.name = _("Clara"),
		.light = RGB2GBA(230,160,140),
		.medium = RGB2GBA(220,160,150),
		.dark = RGB2GBA(180,105,95),
		.darkest = RGB2GBA(115,60,60),
	},
	[CUSTOMIZATION_SKINTONE_MEDIUM_SKIN] = 
	{
		.name = _("Media"),
		.light = RGB2GBA(200,115,85),
		.medium = RGB2GBA(165,90,80),
		.dark = RGB2GBA(150,75,55),
		.darkest = RGB2GBA(105,50,50),
	},
	[CUSTOMIZATION_SKINTONE_BROWN_SKIN] = 
	{
		.name = _("Media Oscura"),
		.light = RGB2GBA(175,85,60),
		.medium = RGB2GBA(165,90,80),
		.dark = RGB2GBA(150,75,55),
		.darkest = RGB2GBA(95,45,45),
	},
	[CUSTOMIZATION_SKINTONE_DARK_SKIN] = 
	{
		.name = _("Oscura"),
		.light = RGB2GBA(135,65,45),
		.medium = RGB2GBA(110,45,30),
		.dark = RGB2GBA(90,35,20),
		.darkest = RGB2GBA(60,20,20),
	},
	// clothes start
	[CUSTOMIZATION_CLOTHES_RED] = 
	{
		.name = _("Roja"), // no funciona
		.light = RGB2GBA(240,60,70),
		.medium = RGB2GBA(185,35,50),
		.dark = RGB2GBA(165,20,35),
		.darkest = RGB2GBA(125,10,20),
	},
	[CUSTOMIZATION_CLOTHES_ORANGE] = 
	{
		.name = _("Naranja"), // no funciona
		.light = RGB2GBA(230,85,50),
		.medium = RGB2GBA(190,55,20),
		.dark = RGB2GBA(170,45,10),
		.darkest = RGB2GBA(160,35,0),
	},
	[CUSTOMIZATION_CLOTHES_YELLOW] = 
	{
		.name = _("Amarilla"), // no funciona
		.light = RGB2GBA(230,180,45),
		.medium = RGB2GBA(190,120,30),
		.dark = RGB2GBA(130,75,15),
		.darkest = RGB2GBA(110,50,5),
	},
	[CUSTOMIZATION_CLOTHES_GREEN] = 
	{
		.name = _("Verde"),
		.light = RGB2GBA(115,205,115),
		.medium = RGB2GBA(75,150,85),
		.dark = RGB2GBA(50,120,60),
		.darkest = RGB2GBA(30,90,50),
	},
	[CUSTOMIZATION_CLOTHES_CYAN] = 
	{
		.name = _("Cyan"),
		.light = RGB2GBA(95,215,175),
		.medium = RGB2GBA(55,150,145),
		.dark = RGB2GBA(25,95,90),
		.darkest = RGB2GBA(15,75,70),
	},
	[CUSTOMIZATION_CLOTHES_BLUE] = 
	{
		.name = _("Azul"),
		.light = RGB2GBA(40,95,200),
		.medium = RGB2GBA(25,70,160),
		.dark = RGB2GBA(5,55,120),
		.darkest = RGB2GBA(20,30,90),
	},
	[CUSTOMIZATION_CLOTHES_PURPLE] = 
	{
		.name = _("Violeta"),
		.light = RGB2GBA(120,75,195),
		.medium = RGB2GBA(80,45,140),
		.dark = RGB2GBA(60,30,115),
		.darkest = RGB2GBA(20,30,90),
	},
	[CUSTOMIZATION_CLOTHES_PINK] = 
	{
		.name = _("Rosa"),
		.light = RGB2GBA(235,90,230),
		.medium = RGB2GBA(185,55,180),
		.dark = RGB2GBA(125,30,140),
		.darkest = RGB2GBA(20,30,90),
	}
	
};

static bool8 ClothingItemHasDarkerColor(u8 item) {
	return (gClothingItems[item].dark >= 1);
}

static bool8 ClothingItemHasDarkestColor(u8 item) {
	return (gClothingItems[item].darkest >= 1);
}


static s8 DarkenColorByMargin(s8 colorToDarken, s8 referenceColor, u8 modifier){
	s8 newColor;
	u8 i;
	newColor = referenceColor;
	if (modifier == 0)
		return colorToDarken;
	if (modifier == 1)
		return referenceColor;
	if (modifier >= 2)
		newColor -= (colorToDarken - referenceColor);
	if (modifier >= 3)
		newColor -= (colorToDarken - referenceColor)/2;
	if (modifier >= 4)
		newColor -= (colorToDarken - referenceColor)/4;
	if ((newColor) < 0)
		return 0;
	return newColor;
}

static u16 GetCustomizedColor(u8 item, u8 i, u8 x) {
	
	s8 shadowR, shadowG, shadowB, lightR, lightG, lightB, rx, bx, gx;
	u8 clothing = gSaveBlock2Ptr->customization[item];
	
	shadowR = GET_R(gClothingItems[clothing].medium);
	shadowG = GET_G(gClothingItems[clothing].medium);
	shadowB = GET_B(gClothingItems[clothing].medium);
	lightR  = GET_R(gClothingItems[clothing].light);
	lightG  = GET_G(gClothingItems[clothing].light);
	lightB  = GET_B(gClothingItems[clothing].light);
	
	
	rx = DarkenColorByMargin(lightR, shadowR, i - x);
	gx = DarkenColorByMargin(lightG, shadowG, i - x);
	bx = DarkenColorByMargin(lightB, shadowB, i - x);
	
	if (i-x == 2 && ClothingItemHasDarkerColor(clothing)){ // if color has darker tone, use that instead.
		rx = GET_R(gClothingItems[clothing].dark);
		gx = GET_G(gClothingItems[clothing].dark);
		bx = GET_B(gClothingItems[clothing].dark);
	}
	else if (i-x == 3 && ClothingItemHasDarkestColor(clothing)){ // if color has darkest tone, use that instead.
		rx = GET_R(gClothingItems[clothing].darkest);
		gx = GET_G(gClothingItems[clothing].darkest);
		bx = GET_B(gClothingItems[clothing].darkest);
	}
	// rx = RGB8_TO_RGB5(rx);
	// gx = RGB8_TO_RGB5(gx);
	// bx = RGB8_TO_RGB5(bx);
	if (rx>31)
		rx = 31;
	if (gx>31)
		gx = 31;
	if (bx>31)
		bx= 31;
	return _RGB(rx,gx,bx); // turn the usual 8bit rgb color to 5bit. then turn it into a color value the game reads.
}
void ApplyPaletteChangesOW(u16* colors) { // ow needs to use the palette buffer, while other places do not.
	
    u8 i, skintone, mainClothes, highlightClothes1, highlightClothes2;
	skintone = gSaveBlock2Ptr->customization[0];
	mainClothes = gSaveBlock2Ptr->customization[1];
	highlightClothes1 = gSaveBlock2Ptr->customization[2];
	highlightClothes2 = gSaveBlock2Ptr->customization[3];
	for (i=0;i<16;i++)
		gPlttBufferFaded[i] = colors[i];
	
	if (gSaveBlock2Ptr->playerGender == MALE) {
		for (i = MALE_SKINTONE_START; i <= MALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.			
			if (skintone != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(0, i, MALE_SKINTONE_START);
		}
		
		// changing main clothes
		
		for (i = MALE_MAIN_CLOTHES_START; i <= MALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(1, i, MALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = MALE_ACCESSORY_1_START; i <= MALE_ACCESSORY_1_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(2, i, MALE_ACCESSORY_1_START);
		}
		
		// changing up highlight2
		
		for (i = MALE_ACCESSORY_2_START; i <= MALE_ACCESSORY_2_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(3, i, MALE_ACCESSORY_2_START);
		}
	}
	else {
		// changing up skintone
		for (i = FEMALE_SKINTONE_START; i <= FEMALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.
			if (skintone != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(0, i, FEMALE_SKINTONE_START);
		}
		
		// changing up main clothes
		
		for (i = FEMALE_MAIN_CLOTHES_START; i <= FEMALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(1, i, FEMALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = FEMALE_ACCESSORY_START; i <= FEMALE_ACCESSORY_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(2, i, FEMALE_ACCESSORY_START);
		}
		
		// changing up hair
		
		for (i = FEMALE_HAIR_START; i <= FEMALE_HAIR_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				gPlttBufferFaded[i] = GetCustomizedColor(3, i, FEMALE_HAIR_START);
		}
	}
}
void ApplyPaletteChanges(u16* colors) {
	
    u8 i, skintone, mainClothes, highlightClothes1, highlightClothes2;
    u16 color;
	skintone = gSaveBlock2Ptr->customization[0];
	mainClothes = gSaveBlock2Ptr->customization[1];
	highlightClothes1 = gSaveBlock2Ptr->customization[2];
	highlightClothes2 = gSaveBlock2Ptr->customization[3];
	if (gSaveBlock2Ptr->playerGender == MALE) {
		
		// changing up skintone
		
		for (i = MALE_SKINTONE_START; i <= MALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.			
			if (skintone != 0)
				colors[i] = GetCustomizedColor(0, i, MALE_SKINTONE_START);
		}
		
		// changing main clothes
		
		for (i = MALE_MAIN_CLOTHES_START; i <= MALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				colors[i] = GetCustomizedColor(1, i, MALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = MALE_ACCESSORY_1_START; i <= MALE_ACCESSORY_1_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				colors[i] = GetCustomizedColor(2, i, MALE_ACCESSORY_1_START);
		}
		
		// changing up highlight2
		
		for (i = MALE_ACCESSORY_2_START; i <= MALE_ACCESSORY_2_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				colors[i] = GetCustomizedColor(3, i, MALE_ACCESSORY_2_START);
		}
	}
	else {
		// changing up skintone
		for (i = FEMALE_SKINTONE_START; i <= FEMALE_SKINTONE_END; i++) { //Should skip past first color, which is transparency.
			if (skintone != 0)
				colors[i] = GetCustomizedColor(0, i, FEMALE_SKINTONE_START);
		}
		
		// changing up main clothes
		
		for (i = FEMALE_MAIN_CLOTHES_START; i <= FEMALE_MAIN_CLOTHES_END; i++) { //Should skip past first color, which is transparency.
			if (mainClothes != 0)
				colors[i] = GetCustomizedColor(1, i, FEMALE_MAIN_CLOTHES_START);
		}
		
		// changing up highlight1
		
		for (i = FEMALE_ACCESSORY_START; i <= FEMALE_ACCESSORY_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes1 != 0)
				colors[i] = GetCustomizedColor(2, i, FEMALE_ACCESSORY_START);
		}
		
		// changing up hair
		
		for (i = FEMALE_HAIR_START; i <= FEMALE_HAIR_END; i++) { //Should skip past first color, which is transparency.
			if (highlightClothes2 != 0)
				colors[i] = GetCustomizedColor(3, i, FEMALE_HAIR_START);
		}
	}
}
void LoadOutfitPalette(const u32 *src, u16 offset, u16 size)
{
    LZDecompressWram(src, gPaletteDecompressionBuffer);
	ApplyPaletteChanges((u16*) gPaletteDecompressionBuffer);
    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferUnfaded + offset, size);
    CpuCopy16(gPaletteDecompressionBuffer, gPlttBufferFaded + offset, size);
}
void LoadOutfitPaletteOW(const u16 *src, u16 offset, u16 size, u8 index)
{
	
	ApplyPaletteChangesOW((u16*) src);
    CpuCopy32(gPlttBufferFaded, gPlttBufferUnfaded + offset, size);
    CpuCopy32(gPlttBufferFaded, gPlttBufferFaded + offset, size);
}

bool8 CheckPlayerGenderSpriteAndPalTag(u16 palTag) // use the paltag to check if the palette should be changed to be the player's customized one. should later use the info on the gOutfitItems struct when functional.
{
	return ((palTag == 0x1100 && gSaveBlock2Ptr->playerGender == MALE) || (palTag == 0x1110 && gSaveBlock2Ptr->playerGender == FEMALE));
}