#ifndef _KBDMODAL_STATE_H_
#define _KBDMODAL_STATE_H_

#include "kbdmodal_keycodes.h"
#include "kbdmodal_code.h"

#ifdef __cplusplus
extern "C" {
#endif

//****************************************************************************
//****************************************************************************
//****************************************************************************

   typedef struct _KBDM_BREAKTABLE
   {
      USHORT m_SPACE;

      USHORT m_Y;
      USHORT m_U;
      USHORT m_I;
      USHORT m_O;
      USHORT m_P;

      USHORT m_H;
      USHORT m_J;
      USHORT m_K;
      USHORT m_L;

      USHORT m_N;
      USHORT m_M;
      USHORT m_COMMA;
      USHORT m_PERIOD;

      USHORT m_Z;

      USHORT m_W;
      USHORT m_E;
      USHORT m_R;

   } KBDM_BREAKTABLE, *PKBDM_BREAKTABLE;

   void Kbdm_ResetBreakTable(PKBDM_BREAKTABLE table);

//****************************************************************************
//****************************************************************************
//****************************************************************************

   typedef struct _KBDM_STATE
   {
      unsigned   mEnable;
      unsigned   mEState;
      unsigned   mMState;
      unsigned   mSpaceFlag;
      KBDM_BREAKTABLE  mBreak;
   } KBDM_STATE, *PKBDM_STATE;

//****************************************************************************
//****************************************************************************
//****************************************************************************

   void Kbdm_ResetState (PKBDM_STATE state);
   void Kbdm_Update_EState   (PKBDM_STATE state,KBDM_CODE xcode, int* zsize, KBDM_CODE zcode[]);
   void Kbdm_Update_MState   (PKBDM_STATE state,PKBDM_CODE xcode);

//****************************************************************************
//****************************************************************************
//****************************************************************************
#ifdef __cplusplus
}
#endif

#endif