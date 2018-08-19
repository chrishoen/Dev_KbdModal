
#include "my_bitutils.h"
#include "kbdmodal_keycodes.h"
#include "kbdmodal_expandz.h"

//****************************************************************************
//****************************************************************************
//****************************************************************************
void Kbdm_Proc_ExpandZ (KBDM_CODE ycode, int* zsize, KBDM_CODE zcode[])
{
   // Guard
   if (ycode.KeyCode==0)
   {
      *zsize=0;
      return;
   }

   // Code list index
   int zindex=0;

   if (ycode.Make)
   {
      // Add shift/cntl/alt to list
      if (my_GetBit16(ycode.KeyCode, KBDM_SHIFT))  Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LSHIFT);
      if (my_GetBit16(ycode.KeyCode, KBDM_CNTL))   Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LCNTL);
      if (my_GetBit16(ycode.KeyCode, KBDM_ALT))    Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LALT);
      // Add key to list
      Kbdm_SetCode(&zcode[zindex++], 1, ycode.KeyCode & KBDM_EEMAKECODE);
   }
   else
   {
      // Add key to list
      Kbdm_SetCode(&zcode[zindex++], 0, ycode.KeyCode & KBDM_EEMAKECODE);
      // Add alt/cntl/shift to list
      if (my_GetBit16(ycode.KeyCode, KBDM_ALT))    Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LALT);
      if (my_GetBit16(ycode.KeyCode, KBDM_SHIFT))  Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LSHIFT);
      if (my_GetBit16(ycode.KeyCode, KBDM_CNTL))   Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LCNTL);
   }

   if (ycode.KeyCode == KEYC_SPECIAL_CUT)
   {
      zindex=0;
      if (ycode.Make)
      {
         // Add key to list
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LSHIFT);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_X);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_X);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LSHIFT);
      }
   }

   if (ycode.KeyCode == KEYC_SPECIAL_COPY)
   {
      zindex=0;
      if (ycode.Make)
      {
         // Add key to list
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LSHIFT);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_C);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_C);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LSHIFT);
      }
   }

   if (ycode.KeyCode == KEYC_SPECIAL_PASTE)
   {
      zindex=0;
      if (ycode.Make)
      {
         // Add key to list
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LSHIFT);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_V);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_V);
         Kbdm_SetCode(&zcode[zindex++], 0, KEYC_LCNTL);
         Kbdm_SetCode(&zcode[zindex++], 1, KEYC_LSHIFT);
      }
   }

   // List size
   *zsize = zindex;
}

