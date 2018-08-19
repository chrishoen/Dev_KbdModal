
#include "kbdmodal_keycodes.h"
#include "kbdmodal_state.h"


//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_ResetBreakTable(PKBDM_BREAKTABLE table)
{
   table->m_SPACE = 0;

   table->m_Y = 0;
   table->m_U = 0;
   table->m_I = 0;
   table->m_O = 0;
   table->m_P = 0;

   table->m_H = 0;
   table->m_J = 0;
   table->m_K = 0;
   table->m_L = 0;

   table->m_N = 0;
   table->m_M = 0;
   table->m_COMMA = 0;
   table->m_PERIOD = 0;

   table->m_Z = 0;

   table->m_W = 0;
   table->m_E = 0;
   table->m_R = 0;
}

//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_ResetState(PKBDM_STATE state)
{
   state->mEnable     = 0;
   state->mEState     = 1;
   state->mMState     = 1;
   state->mMState     = 1;
   state->mSpaceFlag  = 0;
   Kbdm_ResetBreakTable(&state->mBreak);
}

//****************************************************************************
//****************************************************************************
//****************************************************************************
// LSHIFT,LCNTL enable, RSHIFT,LCNTL disable

void Kbdm_Update_EState(PKBDM_STATE state,KBDM_CODE xcode, int* zsize, KBDM_CODE zcode[])
{
   switch (state->mEState)
   {
      //-------------------------------------------------------------------------
      case 1:
      {
         if (xcode.Make && xcode.KeyCode == KEYC_LSHIFT)
         {
            state->mEState = 21;
         }
         else if (xcode.Make && xcode.KeyCode == KEYC_RSHIFT)
         {
            state->mEState = 31;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 21:
      {
         if (!xcode.Make && xcode.KeyCode == KEYC_LSHIFT)
         {
            state->mEState = 22;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 22:
      {
         if (xcode.Make && xcode.KeyCode == KEYC_LCNTL)
         {
            state->mEState = 23;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 23:
      {
         if (!xcode.Make && xcode.KeyCode == KEYC_LCNTL)
         {
            Kbdm_ResetState(state);
            state->mEState = 1;
            state->mEnable = 1;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 31:
      {
         if (!xcode.Make && xcode.KeyCode == KEYC_RSHIFT)
         {
            state->mEState = 32;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 32:
      {
         if (xcode.Make && xcode.KeyCode == KEYC_LCNTL)
         {
            state->mEState = 33;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
      //-------------------------------------------------------------------
      case 33:
      {
         if (!xcode.Make && xcode.KeyCode == KEYC_LCNTL)
         {
            Kbdm_ResetState(state);
            state->mEState = 1;
            state->mEnable = 0;
         }
         else
         {
            state->mEState = 1;
         }
      }
      break;
   }

   //-------------------------------------------------------------------
   // Pass through

   *zsize = 0;

   if (!state->mEnable)
   {
      *zsize = 1;
      zcode[0] = xcode;
   }
}

//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_Update_MState (PKBDM_STATE state,PKBDM_CODE xcode)
{
   switch (state->mMState)
   {
      //-------------------------------------------------------------------------
      case 1:
      {
         if (xcode->KeyCode == KEYC_CAPS && xcode->Make)
         {
            state->mMState = 2;
         }
      }
      break;
      //-------------------------------------------------------------------------
      case 2:
      {
         if (xcode->KeyCode == KEYC_CAPS && !xcode->Make)
         {
            state->mMState = 1;
         }

      }
      break;
   }

   //-------------------------------------------------------------------------
   if (xcode->KeyCode == KEYC_SPACE) state->mSpaceFlag=xcode->Make;

   //-------------------------------------------------------------------------
   if (xcode->KeyCode == KEYC_CAPS)
   {
      xcode->KeyCode = 0;
   }
}

