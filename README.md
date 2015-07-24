# Zombie-Riot
Zombie riot fork is a modified version of [Zombie Riot V1.9.1b] (https://forums.alliedmods.net/showthread.php?p=647040)

# Introduction
What this plugin does is change the objective of any map into one thing: the annihilation of every zombie in sight. The zombies are basically bots with a new model, modified health, and modified speed. There are different levels of play, or "days." Level options are defined in levels.txt, there you can set the amount of zombies the humans must kill, and how much extra HP each zombie will receive. If the humans manage to kill the zombies required for the round, the game will advance to the next level. If the humans are defeated then it will backtrack a day. A lot of the features are similar to Zombie:Reloaded, because most of the plugin was copy pasted from it.

# Compile requirements
*   [Sourcemod: Greater than or equal to 1.7] (http://www.sourcemod.net/downloads.php)
*   [Market] (https://forums.alliedmods.net/showthread.php?t=73821)

# Optional Plugins:
*   [Market] (https://forums.alliedmods.net/showthread.php?t=73821)
*   [NcB_Sav's Bonus Features] (https://forums.alliedmods.net/showthread.php?t=96601?t=96601)
*   [CS:S, ZRiot & ZReloaded Lasermines v1.4.2] (https://forums.alliedmods.net/showthread.php?p=1609654)
*   [CS:S, ZRiot & ZReloaded Grenade Effects v2.0] (https://forums.alliedmods.net/showthread.php?p=1491202)


# Commands:
*   zriot_restrict <weapon> - Restricts the inputed weapon
*   zriot_unrestrict <weapon> - Unrestricts the inputed weapon
*   zriot_setday <day> - Skips the game to the specified day
*   zriot_zombie <player> - Forces a player to the Zombie force
*   zriot_human <player> - Forces a player to the Human force

# Installation:
*   Extract the contents of the zip file into cstrike
*   Install zombieriot.phrases.txt in sourcemod/translations/
*   Navigate to <yourgamedir>/cfg/sourcemod/zombieriot/zombieriot.cfg and configure the ZRiot options
*   Your done!

# Credits:
*   robot: Creator of 3 of the default zombie models, used also by ZombieMod.