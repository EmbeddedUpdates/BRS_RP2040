
/**
 * @file Platform_Types.h
 * @author pflaherty
 * @date 06.23.2024
 * @brief Defines Types that are used by all modules.
 * 
 * COMPONENT: BRS_RP2040
 * VERSION: 01.01.00
 *
 * Change History
 * 01.01.00 - pflaherty - Initial Creation
 * 
 */


/************************************************************
  DEFINES
************************************************************/
#define TRUE 1
#define FALSE 0
#define OR ||
#define AND &&

#define NULL (void *)0x00
#define ZERO32 0x00000000ul

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
typedef unsigned long uint32;
typedef char int8;
typedef short int16;
typedef long int32;

/************************************************************
  EXTERN FUNCTIONS
************************************************************/

/************************************************************
  GLOBAL FUNCTIONS
************************************************************/

