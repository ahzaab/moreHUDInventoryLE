#pragma once
#include "skse/GameData.h"
#include "skse/GameRTTI.h"
#include "skse/GameExtraData.h"
#include "skse/ScaleformCallbacks.h"
#include "skse/ScaleformMovie.h"
#include "AHZConfiguration.h"

using namespace std;

class CAHZScaleform
{
public:
   CAHZScaleform();
   ~CAHZScaleform();
   void ExtendItemCard(GFxMovieView * view, GFxValue * object, InventoryEntryData * item);
   void Initialize();
   bool CAHZScaleform::GetWasBookRead(TESForm *form);
   bool m_showBookRead;
   bool m_enableItemCardResize;

private:
   static void ReplaceStringInPlace(std::string& subject, const std::string& search,
      const std::string& replace);

   static void RegisterString(GFxValue * dst, const char * name, const char * str);
   static void RegisterNumber(GFxValue * dst, const char * name, double value);
   static void RegisterBoolean(GFxValue * dst, const char * name, bool value);
   static double mRound(double d);
   string GetBookSkill(TESForm *form);
   bool GetIsKnownEnchantment(InventoryEntryData * item);

   bool m_showBookSkill;
   bool m_showKnownEnchantment;
};
