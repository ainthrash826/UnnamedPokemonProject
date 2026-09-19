#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

#define GRASS_STARTER (IS_FRLG ? SPECIES_BULBASAUR  : SPECIES_SNIVY)
#define FIRE_STARTER  (IS_FRLG ? SPECIES_CHARMANDER : SPECIES_FUECOCO)
#define WATER_STARTER (IS_FRLG ? SPECIES_SQUIRTLE   : SPECIES_FROAKIE)

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];

u16 GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);

#endif // GUARD_STARTER_CHOOSE_H
