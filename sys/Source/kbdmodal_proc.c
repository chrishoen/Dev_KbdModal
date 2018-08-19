
#include "my_bitutils.h"
#include "kbdmodal_keycodes.h"
#include "kbdmodal_map.h"
#include "kbdmodal_expandz.h"
#include "kbdmodal_proc.h"


//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_Filter(PKBDM_STATE state,KBDM_CODE xcode, int* zsize, KBDM_CODE zcode[])
{
   Kbdm_Update_EState (state,xcode,zsize,zcode);
   if (!state->mEnable) return;

   Kbdm_Update_MState (state,&xcode);
   Kbdm_Proc_Map    (state,&xcode);

   Kbdm_Proc_ExpandZ (xcode,zsize,zcode);
}
