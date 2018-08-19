
#include "kbdmodal_code.h"

//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_ResetCode(PKBDM_CODE code)
{
   code->KeyCode = 0;
   code->Make    = 0;
}

void Kbdm_SetCode(PKBDM_CODE code, unsigned make, unsigned short keycode)
{
   code->KeyCode = keycode;
   code->Make = make;
}

