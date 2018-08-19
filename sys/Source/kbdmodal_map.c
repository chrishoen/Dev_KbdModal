
#include "kbdmodal_map.h"

//****************************************************************************
//****************************************************************************
//****************************************************************************

void Kbdm_Proc_Map   (PKBDM_STATE state,PKBDM_CODE xcode)
{
   // Guard
   if (xcode->KeyCode==0) return;

   USHORT keycode = xcode->KeyCode;

   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------

   if (xcode->Make && state->mMState == 1)
   {
      switch (keycode)
      {
      case KEYC_SPACE:  {state->mBreak.m_SPACE = 0;  break; }

      case KEYC_Y:      {state->mBreak.m_Y = 0;      break; }
      case KEYC_U:      {state->mBreak.m_U = 0;      break; }
      case KEYC_I:      {state->mBreak.m_I = 0;      break; }
      case KEYC_O:      {state->mBreak.m_O = 0;      break; }
      case KEYC_P:      {state->mBreak.m_P = 0;      break; }

      case KEYC_H:      {state->mBreak.m_H = 0;      break; }
      case KEYC_J:      {state->mBreak.m_J = 0;      break; }
      case KEYC_K:      {state->mBreak.m_K = 0;      break; }
      case KEYC_L:      {state->mBreak.m_L = 0;      break; }

      case KEYC_N:      {state->mBreak.m_N = 0;      break; }
      case KEYC_M:      {state->mBreak.m_M = 0;      break; }
      case KEYC_COMMA:  {state->mBreak.m_COMMA = 0;  break; }
      case KEYC_PERIOD: {state->mBreak.m_PERIOD = 0; break; }

      case KEYC_Z:      {state->mBreak.m_Z = 0;      break; }

      case KEYC_W:      {state->mBreak.m_W = 0;      break; }
      case KEYC_E:      {state->mBreak.m_E = 0;      break; }
      case KEYC_R:      {state->mBreak.m_R = 0;      break; }
      }
   }

   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------

   if (xcode->Make && state->mMState == 2)
   {
      switch (keycode)
      {
      case KEYC_SPACE: {keycode = KEYC_LSHIFT; state->mBreak.m_SPACE = keycode; break; }

      case KEYC_Y:     {keycode = KEYC_ESC;    state->mBreak.m_Y = keycode;     break; }
      case KEYC_U:     {keycode = KEYC_UARROW; state->mBreak.m_U = keycode;     break; }
      case KEYC_I:     {keycode = KEYC_DELETE; state->mBreak.m_I = keycode;     break; }
      case KEYC_O:     {keycode = KEYC_INSERT; state->mBreak.m_O = keycode;     break; }
      case KEYC_P:     {keycode = KEYC_USCORE; state->mBreak.m_P = keycode;     break; }

      case KEYC_H:     {keycode = KEYC_HOME;   state->mBreak.m_H = keycode;     break; }
      case KEYC_J:     {keycode = KEYC_LARROW; state->mBreak.m_J = keycode;     break; }
      case KEYC_K:     {keycode = KEYC_RARROW; state->mBreak.m_K = keycode;     break; }
      case KEYC_L:     {keycode = KEYC_END;    state->mBreak.m_L = keycode;     break; }

      case KEYC_N:     {keycode = KEYC_BKSP;   state->mBreak.m_N = keycode;     break; }
      case KEYC_M:     {keycode = KEYC_DARROW; state->mBreak.m_M = keycode;     break; }
      case KEYC_COMMA: {keycode = KEYC_PGDN;   state->mBreak.m_COMMA = keycode; break; }
      case KEYC_PERIOD:{keycode = KEYC_PGUP;   state->mBreak.m_PERIOD = keycode;break; }

      case KEYC_Z:     {keycode = KEYC_CAPS;   state->mBreak.m_Z = keycode;     break; }

      case KEYC_W:     {keycode = KEYC_CUT;    state->mBreak.m_W = keycode;     break; }
      case KEYC_E:     {keycode = KEYC_COPY;   state->mBreak.m_E = keycode;     break; }
      case KEYC_R:     {keycode = KEYC_PASTE;  state->mBreak.m_R = keycode;     break; }
      }

      if (state->mSpaceFlag)
      {
         switch (keycode)
         {
         case KEYC_CUT:   {keycode = KEYC_SPECIAL_CUT;   state->mBreak.m_W = 0; break; }
         case KEYC_COPY:  {keycode = KEYC_SPECIAL_COPY;  state->mBreak.m_E = 0; break; }
         case KEYC_PASTE: {keycode = KEYC_SPECIAL_PASTE; state->mBreak.m_R = 0; break; }
         }
      }

      xcode->KeyCode = keycode;
   }

   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------
   //-------------------------------------------------------------------------

   if (!xcode->Make)
   {
      USHORT bcode = 0;

      switch (keycode)
      {
      case KEYC_SPACE: {bcode = state->mBreak.m_SPACE; state->mBreak.m_SPACE = 0; break; }

      case KEYC_Y:     {bcode = state->mBreak.m_Y;     state->mBreak.m_Y = 0;     break; }
      case KEYC_U:     {bcode = state->mBreak.m_U;     state->mBreak.m_U = 0;     break; }
      case KEYC_I:     {bcode = state->mBreak.m_I;     state->mBreak.m_I = 0;     break; }
      case KEYC_O:     {bcode = state->mBreak.m_O;     state->mBreak.m_O = 0;     break; }
      case KEYC_P:     {bcode = state->mBreak.m_P;     state->mBreak.m_P = 0;     break; }

      case KEYC_H:     {bcode = state->mBreak.m_H;     state->mBreak.m_H = 0;     break; }
      case KEYC_J:     {bcode = state->mBreak.m_J;     state->mBreak.m_J = 0;     break; }
      case KEYC_K:     {bcode = state->mBreak.m_K;     state->mBreak.m_K = 0;     break; }
      case KEYC_L:     {bcode = state->mBreak.m_L;     state->mBreak.m_L = 0;     break; }

      case KEYC_N:     {bcode = state->mBreak.m_N;     state->mBreak.m_N = 0;     break; }
      case KEYC_M:     {bcode = state->mBreak.m_M;     state->mBreak.m_M = 0;     break; }
      case KEYC_COMMA: {bcode = state->mBreak.m_COMMA; state->mBreak.m_COMMA = 0; break; }
      case KEYC_PERIOD:{bcode = state->mBreak.m_PERIOD;state->mBreak.m_PERIOD = 0;break; }

      case KEYC_Z:     {bcode = state->mBreak.m_Z;     state->mBreak.m_Z = 0;     break; }

      case KEYC_W:     {bcode = state->mBreak.m_W;     state->mBreak.m_W = 0;     break; }
      case KEYC_E:     {bcode = state->mBreak.m_E;     state->mBreak.m_E = 0;     break; }
      case KEYC_R:     {bcode = state->mBreak.m_R;     state->mBreak.m_R = 0;     break; }
      }

      if (bcode) keycode = bcode;
      xcode->KeyCode = keycode;
   }
}
