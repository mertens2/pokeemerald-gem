#ifndef GUARD_CHARACTER_CUSTOMIZATION_H
#define GUARD_CHARACTER_CUSTOMIZATION_H
// 

void ApplyPaletteChanges(u16* colors);
void ApplyPaletteChangesOW(u16* colors);
// void LoadCustomizedClothingPalette(const u32 *src, u16 offset, u16 size);
void LoadOutfitPalette(const u32 *src, u16 offset, u16 size);
void LoadOutfitPaletteOW(const u16 *src, u16 offset, u16 size, u8 index);
bool8 CheckPlayerGenderSpriteAndPalTag(u16 palTag);


enum { // customization
	// skintone
	CUSTOMIZATION_SKINTONE_PALE_SKIN = 1,
	CUSTOMIZATION_SKINTONE_LIGHT_SKIN,
	CUSTOMIZATION_SKINTONE_MEDIUM_SKIN,
	CUSTOMIZATION_SKINTONE_BROWN_SKIN,
	CUSTOMIZATION_SKINTONE_DARK_SKIN,
	// clothes start
	CUSTOMIZATION_CLOTHES_RED,
	CUSTOMIZATION_CLOTHES_YELLOW,
	CUSTOMIZATION_CLOTHES_ORANGE,
	CUSTOMIZATION_CLOTHES_GREEN,
	CUSTOMIZATION_CLOTHES_CYAN,
	CUSTOMIZATION_CLOTHES_BLUE,
	CUSTOMIZATION_CLOTHES_PURPLE,
	CUSTOMIZATION_CLOTHES_PINK,
	
	// misc start?
	CUSTOMIZATION_CRYSTAL_BLUE, //new clothing items need to be added here // nuevos colores deben ser añadidos aqui
};

enum {
	CUSTOMIZATION_OUTFIT_EMERALD = 1,
	CUSTOMIZATION_OUTFIT_RS,
	CUSTOMIZATION_OUTFIT_ORAS,
};

struct ClothingInfo {
	u8 name[14]; // name. duh // el nombre. obvio
	u16 light;
	u16 medium;
	u16 dark;
	u16 darkest;
};

extern const struct ClothingInfo gClothingItems[];

struct OutfitInfo {
	u8 name[14]; // name. duh // nombre obvio
	// u16 graphicsId; // graphics id. maybe unnecessary...? // id del gráfico. quizá innecesario...?
	// u16 paletteTag; // tag of the palette. ex: OBJ_EVENT_ID_BRENDAN // tag de la paleta. ej: OBJ_EVENT_ID_BRENDAN
	u8 skintone[2]; // where the skintone starts and ends // donde empieza y termina la piel
	u8 main[2]; // where the main color starts and ends // donde empieza y termina el color principal
	u8 highlight1[2]; // where the highlight color 1 starts and ends // donde empieza y termina el color secundario 1
	u8 highlight2[2]; // where the highlight color 2 starts and ends // donde empieza y termina el color secundario 2
};

extern const struct OutfitInfo gMaleOutfitItems[];
extern const struct OutfitInfo gFemaleOutfitItems[];

#endif