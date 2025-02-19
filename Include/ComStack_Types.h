/**
 * @file ComStack_Types.h
 * @author pflaherty
 * @date 01.04.2025
 * @brief Defines Types that are used by communication stack modules.
 * 
 * COMPONENT: BRS_RP2040
 * VERSION: 01.01.01
 *
 * Change History
 * 01.01.00 - pflaherty - Initial Creation
 * 01.01.2025 - pflaherty - bugfixes for link related UART failure (phantom uart bug)
 * 
 */
#ifndef COMSTACK_TYPES_H
#define COMSTACK_TYPES_H

#if !defined(RP2040) && !defined(VIRTUAL_TARGET)
  /* for cleaner linting, we will assume VIRTUAL_TARGET. */
  #define VIRTUAL_TARGET
#endif

/************************************************************
  DEFINES
************************************************************/

/************************************************************
  ENUMS AND TYPEDEFS
************************************************************/

typedef enum Std_ComErrorCodeTag {
    E_COM_OK = 0,
    E_COM_NOT_OK = 1,
    E_COM_BUSY = 2,
    E_COM_TIMEOUT = 3,
    E_COM_PROTOCOL_VIOLATION = 4,
    E_COM_OVERFLOW = 5,
    E_COM_PENDING = 0xFE,
    E_COM_UNKNOWN = 0xFF
} Std_ComErrorCode;

#endif /* COMSTACK_TYPES_H */