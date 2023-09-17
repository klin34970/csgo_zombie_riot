I - DATABASE

1 - Create a database.
2 - Edit the database.cfg

add this inside:

"zombieriot"
{
	"driver"			"default"
	"host"				"127.0.0.1"
	"database"			"database"
	"user"				"user"
	"pass"				"pass"
}

use this command to create all table: sm_create_zr_tables

II - SETTINGS
All settings are here: addons/sourcemod/configs/drapi/zombie_riot

days.cfg for settings each day.
zombies.cfg for settings each zombie.
models.txt for downloading all zombies/humans models automatically.

/help/menu.cfg this is the menu when you type !help in game.
you can create all languages menus. EX: menu_fr, menu_ro, menu_de...



III - COMMANDS

join              console      
jointeam          console      
kill              console      Kills the player with generic damage
sm_co             admin        
sm_create_zr_tab  server       
sm_help           console      Zombie riot help menu
sm_human          admin        Turns player into human
sm_setday         admin        Sets the game to a certain day
sm_zombie         admin        Turns player into zombie
sm_zradmin        admin        Zombie riot menu admin
sm_zrhelp         console      Zombie riot help menu
sm_zrsettings     console      Native Zombie riot menu general
spectate          console      Switch to spec team

IV - CVARS

All cvars are here: cfg/sourcemod/drapi/drapi_zombie_riot.cfg
if the config file is not create, you have to create a new folder "drapi" and changemap.

z4e_zombie_riot_version          1.0
zombie_riot                      1
zombie_riot_cash                 0
zombie_riot_collision            1
zombie_riot_dev                  0
zombie_riot_freeze_time_zombies  20
zombie_riot_hostname             ZOMBIE RIOT {BETA} ZOMBIE4VER.EU
zombie_riot_hud                  1
zombie_riot_hud_targeting        1
zombie_riot_overlays             1
zombie_riot_remove_buyzone       1
zombie_riot_remove_objectives    1
zombie_riot_respawn_time         10
zombie_riot_sounds               1
zombie_riot_zvision              0.2
zombie_zombie_riot_remove_radgo  20.0

V - TRANSLATIONS

All plugins is translate, so you can edit all sentence here: addons/sourcemod/translations/drapi
If you server is multilanguage, plugin will detect the language client game.
A french player will see all french, a german player will see all in german, etc...



/************************ AIRDROP ************************/
YOU HAVE TO MAKE 3 DROP POINTS OTHERWISE NO CHOPPER WILL COME

I - DATABASE
create the database sm_create_airdrop_tables

II - SETTINGS
config : /addons/sourcemod/configs/days.cfg
Set the weapons in crate: /addons/sourcemod/configs/airdropbox.cfg
Spawns: addons/sourcemod/configs/drapi/airdropbox/spawns/mapname... this file is automatically create when you type sm_airdropspawn

sm_airdropspawn will open a menu you can add, delete, insert a drop points.
you can set the height with sm_airdropheight

III - COMMANDS
to see all cmds type "sm cmds drapi_airdrop"

IV - CVARS
to see all cvars type "sm cvars drapi_airdrop"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ BOT QUOTA ************************/
I - COMMANDS
config : /addons/sourcemod/configs/days.cfg
to see all cmds type "sm cmds drapi_bot_quota"

II - CVARS
to see all cvars type "sm cvars drapi_bot_quota"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ BOT NAMES ************************/
I - SETTINGS
Set the bots names : /addons/sourcemod/configs/bot_names.cfg

II - COMMANDS
to see all cmds type "sm cmds drapi_bots_names"

III - CVARS
to see all cvars type "sm cvars drapi_bots_names"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ HP BAR ************************/
I - SETTINGS
Set the height for some little/big models : /addons/sourcemod/configs/hpbar.cfg

II - COMMANDS
to see all cmds type "sm cmds drapi_hpbar"

III - CVARS
to see all cvars type "sm cvars drapi_hpbar"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ HULK ************************/
I - COMMANDS
to see all cmds type "sm cmds drapi_hulk"

II - CVARS
to see all cvars type "sm cvars drapi_hulk"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ MEDIC ************************/
I - SETTINGS
config : /addons/sourcemod/configs/days.cfg

II - COMMANDS
to see all cmds type "sm cmds drapi_hpbar"

III - CVARS
to see all cvars type "sm cvars drapi_hpbar"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ PROJECTORS ************************/
I - SETTINGS
Spawns: addons/sourcemod/configs/drapi/projectors/spawns/mapname... this file is automatically create when you type sm_projectorspawn

II - COMMANDS
to see all cmds type "sm cmds drapi_projectors"

III - CVARS
to see all cvars type "sm cvars drapi_projectors"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ SLOWMOTION ************************/
I - COMMANDS
to see all cmds type "sm cmds drapi_slowmotion"

II - CVARS
to see all cvars type "sm cvars drapi_slowmotion"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ SPAWNS ************************/
I - SETTINGS
Spawns: addons/sourcemod/configs/drapi/spawns/mapname... this file is automatically create when you type sm_spawns

II - COMMANDS
to see all cmds type "sm cmds drapi_spawns"

III - CVARS
to see all cvars type "sm cvars drapi_spawns"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ SPECIAL WEAPONS ************************/
I - SETTINGS
config : /addons/sourcemod/configs/days.cfg
disable it for some models who doesnt have the attachement : /addons/sourcemod/configs/specials_weapons.cfg

II - COMMANDS
to see all cmds type "sm cmds drapi_specials_weapons"

III - CVARS
to see all cvars type "sm cvars drapi_specials_weapons"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.

/************************ ZOMBIE POWER ************************/
I - SETTINGS
config : /addons/sourcemod/configs/days.cfg
Set the height for some little/big models : /addons/sourcemod/configs/zombiespowers.cfg

II - COMMANDS
to see all cmds type "sm cmds drapi_zombies_powers"

III - CVARS
to see all cvars type "sm cvars drapi_zombies_powers"
config file: cfg/sourcemod/drapi
if the config file is not create, you have to create a new folder "drapi" and changemap.


/************************ SERVER.CFG ************************/
mp_autokick 0
mp_buytime 0
mp_match_end_changelevel 1
mp_match_end_restart 0
mp_roundtime 60

sv_hibernate_when_empty 0
sv_hibernate_postgame_delay 0
sv_hibernate_ms 0
sv_hibernate_ms_vgui 0


sm_cvar sv_penetration_type "0"
sm_cvar sv_holiday_mode 0
sv_maxvelocity 4000
sm_cvar sv_airaccelerate 150
sm_cvar cs_enable_player_physics_box to "1"
sv_gravity 800


sm_cvar sv_turbophysics 1 
sm_cvar phys_pushscale 2
sm_cvar sv_pushaway_force 30000
sm_cvar sv_pushaway_max_force 230000
sm_cvar sv_pushaway_min_player_speed 70

host_players_show 2
host_info_show 2
sv_pure_kick_clients 0
sv_pure 0

