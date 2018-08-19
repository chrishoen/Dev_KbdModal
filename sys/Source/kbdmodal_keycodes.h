#ifndef _KBDMODAL_KEYCODES_H_
#define _KBDMODAL_KEYCODES_H_

#ifndef BASETYPES
#define BASETYPES
typedef unsigned long ULONG;
typedef ULONG *PULONG;
typedef unsigned short USHORT;
typedef USHORT *PUSHORT;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
#endif  /* !BASETYPES */

//****************************************************************************
//****************************************************************************
//****************************************************************************

#ifdef __cplusplus
extern "C" {
#endif

//****************************************************************************
//****************************************************************************
//****************************************************************************
#define  KBDM_MAKECODE    (USHORT)0x00FF
#define  KBDM_EEMAKECODE  (USHORT)0x03FF
#define  KBDM_E0          (USHORT)0x0100
#define  KBDM_E1          (USHORT)0x0200
#define  KBDM_SHIFT       (USHORT)0x0400
#define  KBDM_CNTL        (USHORT)0x0800
#define  KBDM_ALT         (USHORT)0x1000

//****************************************************************************
//****************************************************************************
//****************************************************************************
#define KEYC_A            (USHORT)(0x1E)
#define KEYC_B            (USHORT)(0x30)
#define KEYC_C            (USHORT)(0x2E)
#define KEYC_D            (USHORT)(0x20)
#define KEYC_E            (USHORT)(0x12)
#define KEYC_F            (USHORT)(0x21)
#define KEYC_G            (USHORT)(0x22)
#define KEYC_H            (USHORT)(0x23)
#define KEYC_I            (USHORT)(0x17)
#define KEYC_J            (USHORT)(0x24)
#define KEYC_K            (USHORT)(0x25)
#define KEYC_L            (USHORT)(0x26)
#define KEYC_M            (USHORT)(0x32)
#define KEYC_N            (USHORT)(0x31)
#define KEYC_O            (USHORT)(0x18)
#define KEYC_P            (USHORT)(0x19)
#define KEYC_Q            (USHORT)(0x10)
#define KEYC_R            (USHORT)(0x13)
#define KEYC_S            (USHORT)(0x1F)
#define KEYC_T            (USHORT)(0x14)
#define KEYC_U            (USHORT)(0x16)
#define KEYC_V            (USHORT)(0x2F)
#define KEYC_W            (USHORT)(0x11)
#define KEYC_X            (USHORT)(0x2D)
#define KEYC_Y            (USHORT)(0x15)
#define KEYC_Z            (USHORT)(0x2C)
#define KEYC_N0           (USHORT)(0x0B)
#define KEYC_N1           (USHORT)(0x02)
#define KEYC_N2           (USHORT)(0x03)
#define KEYC_N3           (USHORT)(0x04)
#define KEYC_N4           (USHORT)(0x05)
#define KEYC_N5           (USHORT)(0x06)
#define KEYC_N6           (USHORT)(0x07)
#define KEYC_N7           (USHORT)(0x08)
#define KEYC_N8           (USHORT)(0x09)
#define KEYC_N9           (USHORT)(0x0A)

#define KEYC_TICK         (USHORT)(0x29)
#define KEYC_MINUS        (USHORT)(0x0C)
#define KEYC_EQUAL        (USHORT)(0x0D)
#define KEYC_BSLASH       (USHORT)(0x2B)
#define KEYC_BKSP         (USHORT)(0x0E)
#define KEYC_SPACE        (USHORT)(0x39)
#define KEYC_TAB          (USHORT)(0x0F)
#define KEYC_CAPS         (USHORT)(0x3A )
#define KEYC_LSHIFT       (USHORT)(0x2A)
#define KEYC_LCNTL        (USHORT)(0x1D)
#define KEYC_LGUI         (USHORT)(0x5B | KBDM_E0)
#define KEYC_LALT         (USHORT)(0x38)
#define KEYC_RSHIFT       (USHORT)(0x36)
#define KEYC_RCNTL        (USHORT)(0x1D | KBDM_E0)
#define KEYC_RGUI         (USHORT)(0x5C | KBDM_E0)
#define KEYC_RALT         (USHORT)(0x38 | KBDM_E0)
#define KEYC_APPS         (USHORT)(0x5D | KBDM_E0)
#define KEYC_ENTER        (USHORT)(0x1C)
#define KEYC_ESC          (USHORT)(0x01)
#define KEYC_F1           (USHORT)(0x3B)
#define KEYC_F2           (USHORT)(0x3C)
#define KEYC_F3           (USHORT)(0x3D)
#define KEYC_F4           (USHORT)(0x3E)
#define KEYC_F5           (USHORT)(0x3F)
#define KEYC_F6           (USHORT)(0x40)
#define KEYC_F7           (USHORT)(0x41)
#define KEYC_F8           (USHORT)(0x42)
#define KEYC_F9           (USHORT)(0x43)
#define KEYC_F10          (USHORT)(0x44)
#define KEYC_F11          (USHORT)(0x57)
#define KEYC_F12          (USHORT)(0x58)

#define KEYC_LBRAKET      (USHORT)(0x1A)
#define KEYC_INSERT       (USHORT)(0x52 | KBDM_E0)
#define KEYC_HOME         (USHORT)(0x47 | KBDM_E0)
#define KEYC_PGUP         (USHORT)(0x49 | KBDM_E0)
#define KEYC_DELETE       (USHORT)(0x53 | KBDM_E0)
#define KEYC_END          (USHORT)(0x4F | KBDM_E0)
#define KEYC_PGDN         (USHORT)(0x51 | KBDM_E0)
#define KEYC_UARROW       (USHORT)(0x48 | KBDM_E0)
#define KEYC_LARROW       (USHORT)(0x4B | KBDM_E0)
#define KEYC_DARROW       (USHORT)(0x50 | KBDM_E0)
#define KEYC_RARROW       (USHORT)(0x4D | KBDM_E0)
#define KEYC_NUM          (USHORT)(0x45)
#define KEYC_KPDIV        (USHORT)(0x35 | KBDM_E0)
#define KEYC_KPMUL        (USHORT)(0x37)
#define KEYC_KPSUB        (USHORT)(0x4A)
#define KEYC_KPADD        (USHORT)(0x4E)
#define KEYC_KPENTER      (USHORT)(0x1C | KBDM_E0)
#define KEYC_KPPOINT      (USHORT)(0x53)
#define KEYC_KP0          (USHORT)(0x52)
#define KEYC_KP1          (USHORT)(0x4F)
#define KEYC_KP2          (USHORT)(0x50)
#define KEYC_KP3          (USHORT)(0x51)
#define KEYC_KP4          (USHORT)(0x4B)
#define KEYC_KP5          (USHORT)(0x4C)
#define KEYC_KP6          (USHORT)(0x4D)
#define KEYC_KP7          (USHORT)(0x47)
#define KEYC_KP8          (USHORT)(0x48)
#define KEYC_KP9          (USHORT)(0x49)
#define KEYC_RBRAKET      (USHORT)(0x1B)
#define KEYC_SEMIC        (USHORT)(0x27)
#define KEYC_SQUOTE       (USHORT)(0x28)
#define KEYC_COMMA        (USHORT)(0x33)
#define KEYC_PERIOD       (USHORT)(0x34)
#define KEYC_FSLASH       (USHORT)(0x35)

#define KEYC_COMPL        (KEYC_TICK       | KBDM_SHIFT)
#define KEYC_NOT          (KEYC_N1         | KBDM_SHIFT)
#define KEYC_AT           (KEYC_N2         | KBDM_SHIFT)
#define KEYC_HASH         (KEYC_N3         | KBDM_SHIFT)
#define KEYC_DOLLAR       (KEYC_N4         | KBDM_SHIFT)
#define KEYC_PERCENT      (KEYC_N5         | KBDM_SHIFT)
#define KEYC_HAT          (KEYC_N6         | KBDM_SHIFT)
#define KEYC_AND          (KEYC_N7         | KBDM_SHIFT)
#define KEYC_TIMES        (KEYC_N8         | KBDM_SHIFT)
#define KEYC_LPAREN       (KEYC_N9         | KBDM_SHIFT)
#define KEYC_RPAREN       (KEYC_N0         | KBDM_SHIFT)
#define KEYC_USCORE       (KEYC_MINUS      | KBDM_SHIFT)
#define KEYC_PLUS         (KEYC_EQUAL      | KBDM_SHIFT)
#define KEYC_LBRACE       (KEYC_LBRAKET    | KBDM_SHIFT)
#define KEYC_RBRACE       (KEYC_RBRAKET    | KBDM_SHIFT)
#define KEYC_OR           (KEYC_BSLASH     | KBDM_SHIFT)
#define KEYC_COLON        (KEYC_SEMIC      | KBDM_SHIFT)
#define KEYC_DQUOTE       (KEYC_SQUOTE     | KBDM_SHIFT)
#define KEYC_LESS         (KEYC_COMMA      | KBDM_SHIFT)
#define KEYC_GREATER      (KEYC_PERIOD     | KBDM_SHIFT)
#define KEYC_QUESTION     (KEYC_FSLASH     | KBDM_SHIFT)

#define KEYC_CUT          (KEYC_X          | KBDM_CNTL)
#define KEYC_COPY         (KEYC_C          | KBDM_CNTL)
#define KEYC_PASTE        (KEYC_V          | KBDM_CNTL)

#define KEYC_SPECIAL_CUT     (USHORT)(0x81)
#define KEYC_SPECIAL_COPY    (USHORT)(0x82)
#define KEYC_SPECIAL_PASTE   (USHORT)(0x83)


//****************************************************************************
//****************************************************************************
//****************************************************************************
#ifdef __cplusplus
}
#endif

#endif