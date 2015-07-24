Changelog:

-July 2nd 2008


    * Released

-July 4th 2008

	* Added a zombie boss (you can add multiple bosses anywhere during the game)
	* Got rid of a signature
	* Fix HUD breaking on mapchange
	* Fixed the zombie count being off sometimes
	* Fixed it going on passed the last day
	* Day is reset back to 1 on map change
	* "Levels" are now known as "Days"
	* Added napalm
	* Added cvar to remove ragdolls
	* Hooked zriot_zombieteam to switch the teams immediately
	* Fixed "zriot_zombieteam ct" mixing up winner&loser
	* Added gravity modification to zombies
	* Added jump modification to zombies

-July 6th 2008

	* Fixed FindEntityByClassname error on certain maps
	* Updated RemoveObjectives
	* Extinguish fire on player_death to stop burning sound
	* Market has been removed (and ported to a separate plugin)
	* Fixed removing ragdolls carrying over into next round deleting other random entities (such as weapons out of player's hands)

-July 9th 2008

	* Fixed zr_restrict/unrestrict typo
	* Market is now optional (if you are using market now you MUST update to 1.1)

-July 11th 2008

	* Requires Market 1.2 (or no market at all)
	* Fixes "Zombies left" in the hud being wrong if zriot_zombiemax was higher than the amount of spawn points
	* Added settings in days.txt (update) to set the distance at which the zombies fade away, this can improve FPS if there is a HUGE mob of zombies, and if configured properly can make the game bit more challenging
	* Added cvar to disable blue/red/black fades on round end

-July 16th 2008

	* Spectators now see the HUD
	* Option to make different zombie/day config for specific maps (see configs/zriot/de_dust/zombies.txt & days.txt)
	* Added cvar to show the current status of the last "targeted" zombie, so now you can see the bosses health, and any other zombies
	* Min/max fade applied to zombie's knives too
	* Unloading the plugin will allow bots and humans to join either team again
	* Added cmd zriot_setday to skip the game to a specific day
	* Fixed the count being less than specified in days.txt

-July 25th 2008

	* Added zriot_enable, please use this over unloading the plugin, this works a lot better and is more stable
	* Added map configs, can disable/enable the plugin on certain maps now using zriot_enable
	* Added respawn to humans, you can disable it or set how long to wait before respawning
	* HUD TOTALLY recoded, its been optimized to the best of my abilities and tracks all zombie's you have damaged during round
	* Reminder messages to use !spawn and !market if they are enabled
	* !spawn bases itself off whether they have a timer running or not (this could change because players might exploit by spec hopping then using !spawn
	* Added option to make the plugin respawn bots always, then when the kill limit is reached for the day the remaining zombies dig down into the map and the next day begins
	* Glocks/USP's no longer pile up in bot spawn areas
	* Added cvar to disable day regression, so if you lose you replay the same day instead of going back
	* Zombies emit a sound when they die
	* Default ambient sound always used on first map, not the one in the cvar
	* Bug where zriot_setday used at the right time could set the day without boundaries (as in higher or lower than the configs support)
	* Zombies no longer buy anything including kevlar

-August 6th 2008

	* Fixed a "bypass" in weapon restrictions
	* Killing zombie's with a grenade won't light them on fire when they spawn
	* Compiles on linux (thanks creator)
	* Zombie cash set to 0
	* Removed !spawn and made a cvar to auto-spawn players joining a team
	* Fixed annoying console message saying some prop was out of bounds
	* CT bodies are removed now too
	* Spares players of wasting their money on a restricted weapon from the !market menu
    	* The big one, humans can be zombies too yay, a lot of code was reworked, its been on my server for about a week and I seem to have fixed all the problems that arose
	* Users can disable ZVision with their nightvision key
	* New commands, zriot_human/zriot_zombie that will switch any human player's team on the fly
	* Could be the last feature update, but report any bugs and they'll be checked.

-August 22nd 2008

	* Humans gravity is fixed when no longer a zombie
	* Added a cvar to enable the prepending of [ZRiot Day: x/x] to the hostname
	* Fixed errors that happened on map change
	* zriot_human can't change bots to be human anymore
	* zriot_zombie checks to see if zombies win when moving a human
	* Added total number of days to the HUD (updated translations)
	* zriot_enable 0 now FULLY disables the plugin
	* Added cvar to make zombie's have no collisions to prevent them from getting stuck
	* Now re-checks clients DX level until a valid value is returned
	* Fixed the round ending multiple times sometimes
	* Added round win overlays (updated downloads.txt and zombieriot.cfg)
	* Zombies have a 0.5 second delay before respawning to prevent nade kills from lighting them on fire in spawn
	* Zombies can't target anybody
	* Fixed rare bug that made the zombies falsely win if a client leaves at the right time

-August 25th 2008

	* Removed a debug msg
	* Market message is printed to only humans now
	* The "zombieoverride" setting now supports multiple zombies
	* Added a check to make sure any client with a zombie skin will not be able to pickup any other weapon other than the knife
	* Made knives invisible
	* Added "storyline" setting which allows you to illustrate a story as the players progress through the days
	* Added cvar that hides the text printed when bots join or leave the server
	* Added cvar to make market useable only in a buyzone
	* days.txt is now parsed for escape sequences meaning you can use quotes in the settings (specifically for storyline)
	* New interface which will allow other plugins to interact with some functions used by ZRiot, to be documented

-March 21st 2009

	* Fixed occasional error when player disconnects
	* Added ZRiot_GetHumanTeam() and ZRiot_GetZombieTeam() to interface
	* Fixed an error caused by disabling ZVision
	* Added cvar to freeze zombies for a certain amount of time when the round starts
	* Changed a couple cvars' default values

-June 24th 2010

	* Fixed broken offsets and signatures that were changed in CSS:OB

-June 20th 2011

	* Fixed windows version
	* Fixed skys being f'd up
	* Fixed zombies not freezing