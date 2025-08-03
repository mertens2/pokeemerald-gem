import glob
import re
import os

if not os.path.exists("Makefile"):
    print("Please run this script from your root folder.")
    quit()

# Read item_ability.h and extract the icon and palette information
for file in glob.glob('./src/data/text/abilities.h'):
    with open(file, 'r') as f:
        ability_names_content = f.read()

# Extract item icon and palette data from item_ability.h
ability_pattern = re.compile(r'\[(ABILITY_[A-Z_0-9]+)\]\s*=\s*\_\(\"([^\"\)]+)\"\),', re.MULTILINE)
ability_data = {}
ability_data_formatted = {}
last_find = ''
repeated_finds = 0
language = 'spa'
for match in ability_pattern.findall(ability_names_content):
    if len(match) == 2:
        ability_id, ability_name = match
        if last_find == "ABILITY_NONE":
            repeated_finds = repeated_finds + 1
        if repeated_finds <= 1 and language == 'spa':
            ability_data[ability_id] = (ability_name)
        elif language != 'spa':
            ability_data[ability_id] = (ability_name)
        last_find = ability_id
# Read items.h content
for file in glob.glob('./include/constants/abilities.h'):
    with open(file, 'r') as f:
        ability_constants = f.read()

# Modify items.h content
def add_ability_data(match):
    ability_id = match.group(1)
    pokedoku_content = match.group(2)
    if ability_id in ability_data and ability_id != 0:
        ability_name = ability_data[ability_id]
        print(f"Updating {ability_id}: adding {ability_name}")
        ability_data_formatted[ability_id] = f'   COMPOUND_STRING(\"{ability_name}\"),'
        return ''
    else:
        return f''

item_pattern = re.compile(r'\[(ITEM_[A-Z_0-9]+)\]\s*=\s*\{([\s\S]*?)\},', re.DOTALL)
modified_abilities_content = ability_pattern.sub(add_ability_data, ability_names_content)
# Write the modified content back to items.h
for file in glob.glob('./src/data/pokedoku.h'):
    with open(file, 'w') as f:
        f.write('#include "metaprogram.h"\n#include "text/abilities.h"\n')
        f.write("const struct MenuAction MultichoiceList_Abilities[] = \n{\n")
        modified_abilities_content
        for ability in ability_data:
            if ability != "ABILITY_NONE" and ability != "ABILITY_CACOPHONY":
                f.write("   {gAbilityNames[")
                f.write(f'{ability}]')
                f.write('},')
                f.write(f'\n')
        f.write("}")
        print("pokedoku.h has been updated")