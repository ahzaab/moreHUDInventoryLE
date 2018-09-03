#pragma once

#include "skse/GameTypes.h"
#include "skse/GameMenus.h"
#include "skse/ScaleformMovie.h"
#include "skse/PapyrusEvents.h"
#include <string.h>

using namespace std;

extern string g_currentMenu;

class AHZEventHandler : public BSTEventSink <MenuOpenCloseEvent> {

   EventResult ReceiveEvent(MenuOpenCloseEvent * evn, EventDispatcher<MenuOpenCloseEvent> * dispatcher);
};

