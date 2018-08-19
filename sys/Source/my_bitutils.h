#ifndef _MY_BITUTILS_H_
#define _MY_BITUTILS_H_

/*==============================================================================
Description:
My bit utilities
==============================================================================*/

//******************************************************************************
//******************************************************************************
//******************************************************************************

__inline void my_SetBit32(unsigned int* aData, unsigned int aBitMask, unsigned int aValue)
{
   if(aValue) *aData |= aBitMask;
   else       *aData &= ~aBitMask;
}

__inline void my_SetBit16(unsigned short* aData, unsigned short aBitMask, unsigned int aValue)
{
   if(aValue) *aData |= aBitMask;
   else       *aData &= ~aBitMask;
}

__inline void my_SetBit08(unsigned char* aData, unsigned char aBitMask, unsigned int aValue)
{
   if(aValue) *aData |= aBitMask;
   else       *aData &= ~aBitMask;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************

__inline unsigned int my_GetBit32(unsigned int aData, unsigned int aBitMask)
{
   return aData & aBitMask ? 1 : 0;
}

__inline unsigned int my_GetBit16(unsigned short aData, unsigned short aBitMask)
{
   return aData & aBitMask ? 1 : 0;
}

__inline unsigned int my_GetBit08(unsigned char aData, unsigned char aBitMask)
{
   return aData & aBitMask ? 1 : 0;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************

__inline void my_SetBitAtPos32(unsigned int* aData, unsigned int aBitPos, unsigned int aValue)
{
   unsigned int tValue = (1 << aBitPos);
   if(aValue) *aData |= tValue;
   else       *aData &= ~tValue;
}

__inline void my_SetBitAtPos16(unsigned short* aData, unsigned int aBitPos, unsigned int aValue)
{
   unsigned short tValue = (1 << aBitPos);
   if(aValue) *aData |= tValue;
   else       *aData &= ~tValue;
}

__inline void my_SetBitAtPos08(unsigned char* aData, unsigned int aBitPos, unsigned int aValue)
{
   unsigned char tValue = (1 << aBitPos);
   if(aValue) *aData |= tValue;
   else       *aData &= ~tValue;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************

__inline unsigned int my_GetBitAtPos32(unsigned int aData, unsigned int aBitPos)
{
   unsigned int tValue = (1 << aBitPos);
   return aData & tValue ? 1 : 0;
}

__inline unsigned int my_GetBitAtPos16(unsigned short aData, unsigned int aBitPos)
{
   unsigned short tValue = (1 << aBitPos);
   return aData & tValue ? 1 : 0;
}

__inline unsigned int my_GetBitAtPos08(unsigned char aData, unsigned int aBitPos)
{
   unsigned char tValue = (1 << aBitPos);
   return aData & tValue ? 1 : 0;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
#endif

