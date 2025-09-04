// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#include "constants/abilities.h"
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

// Macros to allow editing every form at once
#define FLIP    0
#define NO_FLIP 1

const struct BaseStats gBaseStats[] =
{
    [SPECIES_NONE] = {0},
	#include "base_stats/gen_1_species.h"
    #include "base_stats/gen_2_species.h"
    #include "base_stats/gen_3_species.h"
    #include "base_stats/gen_4_species.h"
    #include "base_stats/gen_5_species.h"
    #include "base_stats/gen_6_species.h"
    #include "base_stats/gen_7_species.h"
    #include "base_stats/gen_8_species.h"
    #include "base_stats/past_gen_8_species.h"
};
