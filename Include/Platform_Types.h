
/**
 * @file Platform_Types.h
 * @author pflaherty
 * @date 01.15.2025
 * @brief Defines Types that are used by all modules.
 * 
 * COMPONENT: BRS_RP2040
 * VERSION: 01.01.01
 *
 * Change History
 * 01.01.00 - pflaherty - Initial Creation
 * 01.01.2025 - pflaherty - bugfixes for link related UART failure (phantom uart bug)
 * 
 */
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/************************************************************
  DEFINES
************************************************************/
#define TRUE 1
#define FALSE 0
#define OR ||
#define AND &&

/* Some of these may be defined elsewhere (i.e. stddef.h) and should have #if guards here */
#if !defined( NULL )
#define NULL (void *)0x00
#endif /* NULL */

/* 
  Converts an index bit to bitmap, i.e. 0x4 -> 0b10000
  0x0 -> 0b0001
  0x1 -> 0b0010
  0x2 -> 0b0100
*/
#define INT_TO_BITMAP(x) (1 << x)

/************************************************************
  INCLUDES
************************************************************/

/************************************************************
  ENUMS AND TYPEDEFS
************************************************************/

typedef enum Std_ErrorCodeTag {
    E_OK = 0,
    E_NOT_OK = 1,
    E_INVALID_PARAM = 2,
    E_MODULE_UNINIT = 3,

} Std_ErrorCode;

/* To simplify generic return types (i.e. Pass, Fail, Error Code) */
typedef unsigned char Std_ReturnType;

/* 32 Bit Platform Type Defs */
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;
typedef char int8;
typedef short int16;
typedef int int32;

#define ZERO32 ((uint32)0x00000000)

/************************************************************
  EXTERN FUNCTIONS
************************************************************/

/************************************************************
  GLOBAL FUNCTIONS
************************************************************/

#endif /* PLATFORM_TYPES_H */
