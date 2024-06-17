/*
QMM - Q3 MultiMod
Copyright 2004-2024
https://github.com/thecybermind/qmm/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < cybermind@gmail.com >

*/

#include <rtcwsp/game/q_shared.h>
#include <rtcwsp/game/g_public.h>
#include "game_api.h"

GEN_MSGS(RTCWSP);

const char* RTCWSP_eng_msg_names(int cmd) {
	switch(cmd) {
		case G_PRINT:
			return "G_PRINT";
		case G_ERROR:
			return "G_ERROR";
		case G_ENDGAME:
			return "G_ENDGAME";
		case G_MILLISECONDS:
			return "G_MILLISECONDS";
		case G_CVAR_REGISTER:
			return "G_CVAR_REGISTER";
		case G_CVAR_UPDATE:
			return "G_CVAR_UPDATE";
		case G_CVAR_SET:
			return "G_CVAR_SET";
		case G_CVAR_VARIABLE_INTEGER_VALUE:
			return "G_CVAR_VARIABLE_INTEGER_VALUE";
		case G_CVAR_VARIABLE_STRING_BUFFER:
			return "G_CVAR_VARIABLE_STRING_BUFFER";
		case G_ARGC:
			return "G_ARGC";
		case G_ARGV:
			return "G_ARGV";
		case G_FS_FOPEN_FILE:
			return "G_FS_FOPEN_FILE";
		case G_FS_READ:
			return "G_FS_READ";
		case G_FS_WRITE:
			return "G_FS_WRITE";
		case G_FS_RENAME:
			return "G_FS_RENAME";
		case G_FS_FCLOSE_FILE:
			return "G_FS_FCLOSE_FILE";
		case G_SEND_CONSOLE_COMMAND:
			return "G_SEND_CONSOLE_COMMAND";
		case G_LOCATE_GAME_DATA:
			return "G_LOCATE_GAME_DATA";
		case G_DROP_CLIENT:
			return "G_DROP_CLIENT";
		case G_SEND_SERVER_COMMAND:
			return "G_SEND_SERVER_COMMAND";
		case G_SET_CONFIGSTRING:
			return "G_SET_CONFIGSTRING";
		case G_GET_CONFIGSTRING:
			return "G_GET_CONFIGSTRING";
		case G_GET_USERINFO:
			return "G_GET_USERINFO";
		case G_SET_USERINFO:
			return "G_SET_USERINFO";
		case G_GET_SERVERINFO:
			return "G_GET_SERVERINFO";
		case G_SET_BRUSH_MODEL:
			return "G_SET_BRUSH_MODEL";
		case G_TRACE:
			return "G_TRACE";
		case G_POINT_CONTENTS:
			return "G_POINT_CONTENTS";
		case G_IN_PVS:
			return "G_IN_PVS";
		case G_IN_PVS_IGNORE_PORTALS:
			return "G_IN_PVS_IGNORE_PORTALS";
		case G_ADJUST_AREA_PORTAL_STATE:
			return "G_ADJUST_AREA_PORTAL_STATE";
		case G_AREAS_CONNECTED:
			return "G_AREAS_CONNECTED";
		case G_LINKENTITY:
			return "G_LINKENTITY";
		case G_UNLINKENTITY:
			return "G_UNLINKENTITY";
		case G_ENTITIES_IN_BOX:
			return "G_ENTITIES_IN_BOX";
		case G_ENTITY_CONTACT:
			return "G_ENTITY_CONTACT";
		case G_BOT_ALLOCATE_CLIENT:
			return "G_BOT_ALLOCATE_CLIENT";
		case G_BOT_FREE_CLIENT:
			return "G_BOT_FREE_CLIENT";
		case G_GET_USERCMD:
			return "G_GET_USERCMD";
		case G_GET_ENTITY_TOKEN:
			return "G_GET_ENTITY_TOKEN";
		case G_FS_GETFILELIST:
			return "G_FS_GETFILELIST";
		case G_DEBUG_POLYGON_CREATE:
			return "G_DEBUG_POLYGON_CREATE";
		case G_DEBUG_POLYGON_DELETE:
			return "G_DEBUG_POLYGON_DELETE";
		case G_REAL_TIME:
			return "G_REAL_TIME";
		case G_SNAPVECTOR:
			return "G_SNAPVECTOR";
		case G_TRACECAPSULE:
			return "G_TRACECAPSULE";
		case G_ENTITY_CONTACTCAPSULE:
			return "G_ENTITY_CONTACTCAPSULE";
		case G_GETTAG:
			return "G_GETTAG";
		case BOTLIB_SETUP:
			return "BOTLIB_SETUP";
		case BOTLIB_SHUTDOWN:
			return "BOTLIB_SHUTDOWN";
		case BOTLIB_LIBVAR_SET:
			return "BOTLIB_LIBVAR_SET";
		case BOTLIB_LIBVAR_GET:
			return "BOTLIB_LIBVAR_GET";
		case BOTLIB_PC_ADD_GLOBAL_DEFINE:
			return "BOTLIB_PC_ADD_GLOBAL_DEFINE";
		case BOTLIB_START_FRAME:
			return "BOTLIB_START_FRAME";
		case BOTLIB_LOAD_MAP:
			return "BOTLIB_LOAD_MAP";
		case BOTLIB_UPDATENTITY:
			return "BOTLIB_UPDATENTITY";
		case BOTLIB_TEST:
			return "BOTLIB_TEST";
		case BOTLIB_GET_SNAPSHOT_ENTITY:
			return "BOTLIB_GET_SNAPSHOT_ENTITY";
		case BOTLIB_GET_CONSOLE_MESSAGE:
			return "BOTLIB_GET_CONSOLE_MESSAGE";
		case BOTLIB_USER_COMMAND:
			return "BOTLIB_USER_COMMAND";
		case BOTLIB_AAS_ENTITY_VISIBLE:
			return "BOTLIB_AAS_ENTITY_VISIBLE";
		case BOTLIB_AAS_IN_FIELD_OF_VISION:
			return "BOTLIB_AAS_IN_FIELD_OF_VISION";
		case BOTLIB_AAS_VISIBLE_CLIENTS:
			return "BOTLIB_AAS_VISIBLE_CLIENTS";
		case BOTLIB_AAS_ENTITY_INFO:
			return "BOTLIB_AAS_ENTITY_INFO";
		case BOTLIB_AAS_INITIALIZED:
			return "BOTLIB_AAS_INITIALIZED";
		case BOTLIB_AAS_PRESENCE_TYPE_BOUNDING_BOX:
			return "BOTLIB_AAS_PRESENCE_TYPE_BOUNDING_BOX";
		case BOTLIB_AAS_TIME:
			return "BOTLIB_AAS_TIME";
		case BOTLIB_AAS_SETCURRENTWORLD:
			return "BOTLIB_AAS_SETCURRENTWORLD";
		case BOTLIB_AAS_POINT_AREA_NUM:
			return "BOTLIB_AAS_POINT_AREA_NUM";
		case BOTLIB_AAS_TRACE_AREAS:
			return "BOTLIB_AAS_TRACE_AREAS";
		case BOTLIB_AAS_POINT_CONTENTS:
			return "BOTLIB_AAS_POINT_CONTENTS";
		case BOTLIB_AAS_NEXT_BSP_ENTITY:
			return "BOTLIB_AAS_NEXT_BSP_ENTITY";
		case BOTLIB_AAS_VALUE_FOR_BSP_EPAIR_KEY:
			return "BOTLIB_AAS_VALUE_FOR_BSP_EPAIR_KEY";
		case BOTLIB_AAS_VECTOR_FOR_BSP_EPAIR_KEY:
			return "BOTLIB_AAS_VECTOR_FOR_BSP_EPAIR_KEY";
		case BOTLIB_AAS_FLOAT_FOR_BSP_EPAIR_KEY:
			return "BOTLIB_AAS_FLOAT_FOR_BSP_EPAIR_KEY";
		case BOTLIB_AAS_INT_FOR_BSP_EPAIR_KEY:
			return "BOTLIB_AAS_INT_FOR_BSP_EPAIR_KEY";
		case BOTLIB_AAS_AREA_REACHABILITY:
			return "BOTLIB_AAS_AREA_REACHABILITY";
		case BOTLIB_AAS_AREA_TRAVEL_TIME_TO_GOAL_AREA:
			return "BOTLIB_AAS_AREA_TRAVEL_TIME_TO_GOAL_AREA";
		case BOTLIB_AAS_SWIMMING:
			return "BOTLIB_AAS_SWIMMING";
		case BOTLIB_AAS_PREDICT_CLIENT_MOVEMENT:
			return "BOTLIB_AAS_PREDICT_CLIENT_MOVEMENT";
		case BOTLIB_AAS_RT_SHOWROUTE:
			return "BOTLIB_AAS_RT_SHOWROUTE";
		case BOTLIB_AAS_RT_GETHIDEPOS:
			return "BOTLIB_AAS_RT_GETHIDEPOS";
		case BOTLIB_AAS_FINDATTACKSPOTWITHINRANGE:
			return "BOTLIB_AAS_FINDATTACKSPOTWITHINRANGE";
		case BOTLIB_AAS_GETROUTEFIRSTVISPOS:
			return "BOTLIB_AAS_GETROUTEFIRSTVISPOS";
		case BOTLIB_AAS_SETAASBLOCKINGENTITY:
			return "BOTLIB_AAS_SETAASBLOCKINGENTITY";
		case BOTLIB_EA_SAY:
			return "BOTLIB_EA_SAY";
		case BOTLIB_EA_SAY_TEAM:
			return "BOTLIB_EA_SAY_TEAM";
		case BOTLIB_EA_USE_ITEM:
			return "BOTLIB_EA_USE_ITEM";
		case BOTLIB_EA_DROP_ITEM:
			return "BOTLIB_EA_DROP_ITEM";
		case BOTLIB_EA_USE_INV:
			return "BOTLIB_EA_USE_INV";
		case BOTLIB_EA_DROP_INV:
			return "BOTLIB_EA_DROP_INV";
		case BOTLIB_EA_GESTURE:
			return "BOTLIB_EA_GESTURE";
		case BOTLIB_EA_COMMAND:
			return "BOTLIB_EA_COMMAND";
		case BOTLIB_EA_SELECT_WEAPON:
			return "BOTLIB_EA_SELECT_WEAPON";
		case BOTLIB_EA_TALK:
			return "BOTLIB_EA_TALK";
		case BOTLIB_EA_ATTACK:
			return "BOTLIB_EA_ATTACK";
		case BOTLIB_EA_RELOAD:
			return "BOTLIB_EA_RELOAD";
		case BOTLIB_EA_USE:
			return "BOTLIB_EA_USE";
		case BOTLIB_EA_RESPAWN:
			return "BOTLIB_EA_RESPAWN";
		case BOTLIB_EA_JUMP:
			return "BOTLIB_EA_JUMP";
		case BOTLIB_EA_DELAYED_JUMP:
			return "BOTLIB_EA_DELAYED_JUMP";
		case BOTLIB_EA_CROUCH:
			return "BOTLIB_EA_CROUCH";
		case BOTLIB_EA_MOVE_UP:
			return "BOTLIB_EA_MOVE_UP";
		case BOTLIB_EA_MOVE_DOWN:
			return "BOTLIB_EA_MOVE_DOWN";
		case BOTLIB_EA_MOVE_FORWARD:
			return "BOTLIB_EA_MOVE_FORWARD";
		case BOTLIB_EA_MOVE_BACK:
			return "BOTLIB_EA_MOVE_BACK";
		case BOTLIB_EA_MOVE_LEFT:
			return "BOTLIB_EA_MOVE_LEFT";
		case BOTLIB_EA_MOVE_RIGHT:
			return "BOTLIB_EA_MOVE_RIGHT";
		case BOTLIB_EA_MOVE:
			return "BOTLIB_EA_MOVE";
		case BOTLIB_EA_VIEW:
			return "BOTLIB_EA_VIEW";
		case BOTLIB_EA_END_REGULAR:
			return "BOTLIB_EA_END_REGULAR";
		case BOTLIB_EA_GET_INPUT:
			return "BOTLIB_EA_GET_INPUT";
		case BOTLIB_EA_RESET_INPUT:
			return "BOTLIB_EA_RESET_INPUT";
		case BOTLIB_AI_LOAD_CHARACTER:
			return "BOTLIB_AI_LOAD_CHARACTER";
		case BOTLIB_AI_FREE_CHARACTER:
			return "BOTLIB_AI_FREE_CHARACTER";
		case BOTLIB_AI_CHARACTERISTIC_FLOAT:
			return "BOTLIB_AI_CHARACTERISTIC_FLOAT";
		case BOTLIB_AI_CHARACTERISTIC_BFLOAT:
			return "BOTLIB_AI_CHARACTERISTIC_BFLOAT";
		case BOTLIB_AI_CHARACTERISTIC_INTEGER:
			return "BOTLIB_AI_CHARACTERISTIC_INTEGER";
		case BOTLIB_AI_CHARACTERISTIC_BINTEGER:
			return "BOTLIB_AI_CHARACTERISTIC_BINTEGER";
		case BOTLIB_AI_CHARACTERISTIC_STRING:
			return "BOTLIB_AI_CHARACTERISTIC_STRING";
		case BOTLIB_AI_ALLOC_CHAT_STATE:
			return "BOTLIB_AI_ALLOC_CHAT_STATE";
		case BOTLIB_AI_FREE_CHAT_STATE:
			return "BOTLIB_AI_FREE_CHAT_STATE";
		case BOTLIB_AI_QUEUE_CONSOLE_MESSAGE:
			return "BOTLIB_AI_QUEUE_CONSOLE_MESSAGE";
		case BOTLIB_AI_REMOVE_CONSOLE_MESSAGE:
			return "BOTLIB_AI_REMOVE_CONSOLE_MESSAGE";
		case BOTLIB_AI_NEXT_CONSOLE_MESSAGE:
			return "BOTLIB_AI_NEXT_CONSOLE_MESSAGE";
		case BOTLIB_AI_NUM_CONSOLE_MESSAGE:
			return "BOTLIB_AI_NUM_CONSOLE_MESSAGE";
		case BOTLIB_AI_INITIAL_CHAT:
			return "BOTLIB_AI_INITIAL_CHAT";
		case BOTLIB_AI_REPLY_CHAT:
			return "BOTLIB_AI_REPLY_CHAT";
		case BOTLIB_AI_CHAT_LENGTH:
			return "BOTLIB_AI_CHAT_LENGTH";
		case BOTLIB_AI_ENTER_CHAT:
			return "BOTLIB_AI_ENTER_CHAT";
		case BOTLIB_AI_STRING_CONTAINS:
			return "BOTLIB_AI_STRING_CONTAINS";
		case BOTLIB_AI_FIND_MATCH:
			return "BOTLIB_AI_FIND_MATCH";
		case BOTLIB_AI_MATCH_VARIABLE:
			return "BOTLIB_AI_MATCH_VARIABLE";
		case BOTLIB_AI_UNIFY_WHITE_SPACES:
			return "BOTLIB_AI_UNIFY_WHITE_SPACES";
		case BOTLIB_AI_REPLACE_SYNONYMS:
			return "BOTLIB_AI_REPLACE_SYNONYMS";
		case BOTLIB_AI_LOAD_CHAT_FILE:
			return "BOTLIB_AI_LOAD_CHAT_FILE";
		case BOTLIB_AI_SET_CHAT_GENDER:
			return "BOTLIB_AI_SET_CHAT_GENDER";
		case BOTLIB_AI_SET_CHAT_NAME:
			return "BOTLIB_AI_SET_CHAT_NAME";
		case BOTLIB_AI_RESET_GOAL_STATE:
			return "BOTLIB_AI_RESET_GOAL_STATE";
		case BOTLIB_AI_RESET_AVOID_GOALS:
			return "BOTLIB_AI_RESET_AVOID_GOALS";
		case BOTLIB_AI_PUSH_GOAL:
			return "BOTLIB_AI_PUSH_GOAL";
		case BOTLIB_AI_POP_GOAL:
			return "BOTLIB_AI_POP_GOAL";
		case BOTLIB_AI_EMPTY_GOAL_STACK:
			return "BOTLIB_AI_EMPTY_GOAL_STACK";
		case BOTLIB_AI_DUMP_AVOID_GOALS:
			return "BOTLIB_AI_DUMP_AVOID_GOALS";
		case BOTLIB_AI_DUMP_GOAL_STACK:
			return "BOTLIB_AI_DUMP_GOAL_STACK";
		case BOTLIB_AI_GOAL_NAME:
			return "BOTLIB_AI_GOAL_NAME";
		case BOTLIB_AI_GET_TOP_GOAL:
			return "BOTLIB_AI_GET_TOP_GOAL";
		case BOTLIB_AI_GET_SECOND_GOAL:
			return "BOTLIB_AI_GET_SECOND_GOAL";
		case BOTLIB_AI_CHOOSE_LTG_ITEM:
			return "BOTLIB_AI_CHOOSE_LTG_ITEM";
		case BOTLIB_AI_CHOOSE_NBG_ITEM:
			return "BOTLIB_AI_CHOOSE_NBG_ITEM";
		case BOTLIB_AI_TOUCHING_GOAL:
			return "BOTLIB_AI_TOUCHING_GOAL";
		case BOTLIB_AI_ITEM_GOAL_IN_VIS_BUT_NOT_VISIBLE:
			return "BOTLIB_AI_ITEM_GOAL_IN_VIS_BUT_NOT_VISIBLE";
		case BOTLIB_AI_GET_LEVEL_ITEM_GOAL:
			return "BOTLIB_AI_GET_LEVEL_ITEM_GOAL";
		case BOTLIB_AI_AVOID_GOAL_TIME:
			return "BOTLIB_AI_AVOID_GOAL_TIME";
		case BOTLIB_AI_INIT_LEVEL_ITEMS:
			return "BOTLIB_AI_INIT_LEVEL_ITEMS";
		case BOTLIB_AI_UPDATE_ENTITY_ITEMS:
			return "BOTLIB_AI_UPDATE_ENTITY_ITEMS";
		case BOTLIB_AI_LOAD_ITEM_WEIGHTS:
			return "BOTLIB_AI_LOAD_ITEM_WEIGHTS";
		case BOTLIB_AI_FREE_ITEM_WEIGHTS:
			return "BOTLIB_AI_FREE_ITEM_WEIGHTS";
		case BOTLIB_AI_SAVE_GOAL_FUZZY_LOGIC:
			return "BOTLIB_AI_SAVE_GOAL_FUZZY_LOGIC";
		case BOTLIB_AI_ALLOC_GOAL_STATE:
			return "BOTLIB_AI_ALLOC_GOAL_STATE";
		case BOTLIB_AI_FREE_GOAL_STATE:
			return "BOTLIB_AI_FREE_GOAL_STATE";
		case BOTLIB_AI_RESET_MOVE_STATE:
			return "BOTLIB_AI_RESET_MOVE_STATE";
		case BOTLIB_AI_MOVE_TO_GOAL:
			return "BOTLIB_AI_MOVE_TO_GOAL";
		case BOTLIB_AI_MOVE_IN_DIRECTION:
			return "BOTLIB_AI_MOVE_IN_DIRECTION";
		case BOTLIB_AI_RESET_AVOID_REACH:
			return "BOTLIB_AI_RESET_AVOID_REACH";
		case BOTLIB_AI_RESET_LAST_AVOID_REACH:
			return "BOTLIB_AI_RESET_LAST_AVOID_REACH";
		case BOTLIB_AI_REACHABILITY_AREA:
			return "BOTLIB_AI_REACHABILITY_AREA";
		case BOTLIB_AI_MOVEMENT_VIEW_TARGET:
			return "BOTLIB_AI_MOVEMENT_VIEW_TARGET";
		case BOTLIB_AI_ALLOC_MOVE_STATE:
			return "BOTLIB_AI_ALLOC_MOVE_STATE";
		case BOTLIB_AI_FREE_MOVE_STATE:
			return "BOTLIB_AI_FREE_MOVE_STATE";
		case BOTLIB_AI_INIT_MOVE_STATE:
			return "BOTLIB_AI_INIT_MOVE_STATE";
		case BOTLIB_AI_INIT_AVOID_REACH:
			return "BOTLIB_AI_INIT_AVOID_REACH";
		case BOTLIB_AI_CHOOSE_BEST_FIGHT_WEAPON:
			return "BOTLIB_AI_CHOOSE_BEST_FIGHT_WEAPON";
		case BOTLIB_AI_GET_WEAPON_INFO:
			return "BOTLIB_AI_GET_WEAPON_INFO";
		case BOTLIB_AI_LOAD_WEAPON_WEIGHTS:
			return "BOTLIB_AI_LOAD_WEAPON_WEIGHTS";
		case BOTLIB_AI_ALLOC_WEAPON_STATE:
			return "BOTLIB_AI_ALLOC_WEAPON_STATE";
		case BOTLIB_AI_FREE_WEAPON_STATE:
			return "BOTLIB_AI_FREE_WEAPON_STATE";
		case BOTLIB_AI_RESET_WEAPON_STATE:
			return "BOTLIB_AI_RESET_WEAPON_STATE";
		case BOTLIB_AI_GENETIC_PARENTS_AND_CHILD_SELECTION:
			return "BOTLIB_AI_GENETIC_PARENTS_AND_CHILD_SELECTION";
		case BOTLIB_AI_INTERBREED_GOAL_FUZZY_LOGIC:
			return "BOTLIB_AI_INTERBREED_GOAL_FUZZY_LOGIC";
		case BOTLIB_AI_MUTATE_GOAL_FUZZY_LOGIC:
			return "BOTLIB_AI_MUTATE_GOAL_FUZZY_LOGIC";
		case BOTLIB_AI_GET_NEXT_CAMP_SPOT_GOAL:
			return "BOTLIB_AI_GET_NEXT_CAMP_SPOT_GOAL";
		case BOTLIB_AI_GET_MAP_LOCATION_GOAL:
			return "BOTLIB_AI_GET_MAP_LOCATION_GOAL";
		case BOTLIB_AI_NUM_INITIAL_CHATS:
			return "BOTLIB_AI_NUM_INITIAL_CHATS";
		case BOTLIB_AI_GET_CHAT_MESSAGE:
			return "BOTLIB_AI_GET_CHAT_MESSAGE";
		case BOTLIB_AI_REMOVE_FROM_AVOID_GOALS:
			return "BOTLIB_AI_REMOVE_FROM_AVOID_GOALS";
		case BOTLIB_AI_PREDICT_VISIBLE_POSITION:
			return "BOTLIB_AI_PREDICT_VISIBLE_POSITION";
		case BOTLIB_AI_SET_AVOID_GOAL_TIME:
			return "BOTLIB_AI_SET_AVOID_GOAL_TIME";
		case BOTLIB_AI_ADD_AVOID_SPOT:
			return "BOTLIB_AI_ADD_AVOID_SPOT";
		case BOTLIB_AAS_ALTERNATIVE_ROUTE_GOAL:
			return "BOTLIB_AAS_ALTERNATIVE_ROUTE_GOAL";
		case BOTLIB_AAS_PREDICT_ROUTE:
			return "BOTLIB_AAS_PREDICT_ROUTE";
		case BOTLIB_AAS_POINT_REACHABILITY_AREA_INDEX:
			return "BOTLIB_AAS_POINT_REACHABILITY_AREA_INDEX";
		case BOTLIB_PC_LOAD_SOURCE:
			return "BOTLIB_PC_LOAD_SOURCE";
		case BOTLIB_PC_FREE_SOURCE:
			return "BOTLIB_PC_FREE_SOURCE";
		case BOTLIB_PC_READ_TOKEN:
			return "BOTLIB_PC_READ_TOKEN";
		case BOTLIB_PC_SOURCE_FILE_AND_LINE:
			return "BOTLIB_PC_SOURCE_FILE_AND_LINE";
		case G_FS_COPY_FILE:
			return "G_FS_COPY_FILE";
		default:
			return "unknown";
	}
}

const char* RTCWSP_mod_msg_names(int cmd) {
	switch(cmd) {
		case GAME_INIT:
			return "GAME_INIT";
		case GAME_SHUTDOWN:
			return "GAME_SHUTDOWN";
		case GAME_CLIENT_CONNECT:
			return "GAME_CLIENT_CONNECT";
		case GAME_CLIENT_BEGIN:
			return "GAME_CLIENT_BEGIN";
		case GAME_CLIENT_USERINFO_CHANGED:
			return "GAME_CLIENT_USERINFO_CHANGED";
		case GAME_CLIENT_DISCONNECT:
			return "GAME_CLIENT_DISCONNECT";
		case GAME_CLIENT_COMMAND:
			return "GAME_CLIENT_COMMAND";
		case GAME_CLIENT_THINK:
			return "GAME_CLIENT_THINK";
		case GAME_RUN_FRAME:
			return "GAME_RUN_FRAME";
		case GAME_CONSOLE_COMMAND:
			return "GAME_CONSOLE_COMMAND";
		case BOTAI_START_FRAME:
			return "BOTAI_START_FRAME";
		case AICAST_VISIBLEFROMPOS:
			return "AICAST_VISIBLEFROMPOS";
		case AICAST_CHECKATTACKATPOS:
			return "AICAST_CHECKATTACKATPOS";
		case GAME_RETRIEVE_MOVESPEEDS_FROM_CLIENT:
			return "GAME_RETRIEVE_MOVESPEEDS_FROM_CLIENT";
		case GAME_GETMODELINFO:
			return "GAME_GETMODELINFO";
		default:
			return "unknown";
	}
}
