#pragma once
#include "Common/App_enums.h"

#include <string>
using namespace std;

#define VK_UNBOUND -1

static constexpr int MINECRAFT_ACTION_NONE = 254; // Button CURRENTLY has no mapped action.
static constexpr int NO_BUTTON = 255;             // Button should NEVER be mapped to an action.

struct InputBind
{
    const wstring name;
    const wstring id;
    int key;
    int button = NO_BUTTON;
    const int defaultKey = key;
    const int defaultButton = button;
};

using InputMap = InputBind[];

static const InputMap INPUT_MAP_MOVEMENT
{
    { L"Forward",      L"forward",  'W' },
    { L"Backward",     L"backward", 'S' },
    { L"Strafe Left",  L"left",     'A' },
    { L"Strafe Right", L"right",    'D' },
    { L"Jump",         L"jump",     VK_SPACE,   MINECRAFT_ACTION_JUMP },
    { L"Sneak",        L"sneak",    VK_SHIFT,   MINECRAFT_ACTION_SNEAK_TOGGLE },
    { L"Sprint",       L"sprint",   VK_CONTROL, MINECRAFT_ACTION_NONE }
};

static const InputBind *INPUT_FORWARD  = &INPUT_MAP_MOVEMENT[0];
static const InputBind *INPUT_BACKWARD = &INPUT_MAP_MOVEMENT[1];
static const InputBind *INPUT_LEFT     = &INPUT_MAP_MOVEMENT[2];
static const InputBind *INPUT_RIGHT    = &INPUT_MAP_MOVEMENT[3];
static const InputBind *INPUT_JUMP     = &INPUT_MAP_MOVEMENT[4];
static const InputBind *INPUT_SNEAK    = &INPUT_MAP_MOVEMENT[5];
static const InputBind *INPUT_SPRINT   = &INPUT_MAP_MOVEMENT[6];

static const InputMap INPUT_MAP_GAMEPLAY
{
    { L"Attack/Destroy", L"destroy",   VK_UNBOUND, MINECRAFT_ACTION_ACTION },
    { L"Use/Place",      L"use",       VK_UNBOUND, MINECRAFT_ACTION_USE },
    { L"Open Inventory", L"inventory", 'E',        MINECRAFT_ACTION_INVENTORY },
    { L"Open Crafting",  L"crafting",  'C',        MINECRAFT_ACTION_CRAFTING },
    { L"Drop Item",      L"drop",      'Q',        MINECRAFT_ACTION_DROP }
};

static const InputBind *INPUT_DESTROY   = &INPUT_MAP_GAMEPLAY[0];
static const InputBind *INPUT_USE       = &INPUT_MAP_GAMEPLAY[1];
static const InputBind *INPUT_INVENTORY = &INPUT_MAP_GAMEPLAY[2];
static const InputBind *INPUT_CRAFTING  = &INPUT_MAP_GAMEPLAY[3];
static const InputBind *INPUT_DROP      = &INPUT_MAP_GAMEPLAY[4];

static const InputMap INPUT_MAP_HOTBAR
{
    { L"Left Slot",  L"leftSlot",  VK_UNBOUND, MINECRAFT_ACTION_LEFT_SCROLL },
    { L"Right Slot", L"rightSlot", VK_UNBOUND, MINECRAFT_ACTION_RIGHT_SCROLL },
    { L"Slot 1",     L"slot1",     '1',        MINECRAFT_ACTION_NONE },
    { L"Slot 2",     L"slot2",     '2',        MINECRAFT_ACTION_NONE },
    { L"Slot 3",     L"slot3",     '3',        MINECRAFT_ACTION_NONE },
    { L"Slot 4",     L"slot4",     '4',        MINECRAFT_ACTION_NONE },
    { L"Slot 5",     L"slot5",     '5',        MINECRAFT_ACTION_NONE },
    { L"Slot 6",     L"slot6",     '6',        MINECRAFT_ACTION_NONE },
    { L"Slot 7",     L"slot7",     '7',        MINECRAFT_ACTION_NONE },
    { L"Slot 8",     L"slot8",     '8',        MINECRAFT_ACTION_NONE },
    { L"Slot 9",     L"slot9",     '9',        MINECRAFT_ACTION_NONE }
};

static const InputBind *INPUT_LEFT_SLOT  = &INPUT_MAP_HOTBAR[0];
static const InputBind *INPUT_RIGHT_SLOT = &INPUT_MAP_HOTBAR[1];

static constexpr int INPUT_MAP_HOTBAR_OFFSET = 2;

static const InputMap INPUT_MAP_MISC
{
    { L"Toggle Perspective",    L"view",         VK_F5,  MINECRAFT_ACTION_RENDER_THIRD_PERSON },
    { L"Game Info",             L"info",         VK_TAB, MINECRAFT_ACTION_GAME_INFO },
    { L"Fullscreen",            L"fullscreen",   VK_F11, MINECRAFT_ACTION_NONE },
    { L"Toggle Hud",            L"hud",          VK_F1,  MINECRAFT_ACTION_NONE },
    { L"Toggle Debug Info",     L"debugInfo",    VK_F3,  MINECRAFT_ACTION_DPAD_LEFT },
    { L"Toggle Debug Console",  L"debugConsole", VK_F6,  MINECRAFT_ACTION_NONE },
    { L"Open Debug Menu",       L"debugMenu",    VK_F4,  MINECRAFT_ACTION_DPAD_DOWN },
    { L"Toggle Fly (Debug)",    L"fly",          VK_F10, MINECRAFT_ACTION_DPAD_UP },
    { L"Change Skin (Debug)",   L"skin",         VK_F8,  MINECRAFT_ACTION_DPAD_RIGHT }
};

static const InputBind *INPUT_VIEW          = &INPUT_MAP_MISC[0];
static const InputBind *INPUT_INFO          = &INPUT_MAP_MISC[1];
static const InputBind *INPUT_FULLSCREEN    = &INPUT_MAP_MISC[2];
static const InputBind *INPUT_HUD           = &INPUT_MAP_MISC[3];
static const InputBind *INPUT_DEBUG_INFO    = &INPUT_MAP_MISC[4];
static const InputBind *INPUT_DEBUG_CONSOLE = &INPUT_MAP_MISC[5];
static const InputBind *INPUT_DEBUG_MENU    = &INPUT_MAP_MISC[6];
static const InputBind *INPUT_FLY           = &INPUT_MAP_MISC[7];
static const InputBind *INPUT_SKIN          = &INPUT_MAP_MISC[8];
static const InputBind *INPUT_CREEPER       = &INPUT_MAP_MISC[9];
