
/**
 * @file notMain.h
 * @author pflaherty
 * @date 01.15.2025
 * @brief 
 * 
 * COMPONENT: BRS_RP2040
 * VERSION: 01.01.01
 *
 * Change History
 * 06.23.2024 - Initial Creation
 * 01.01.2025 - pflaherty - bugfixes for link related UART failure (phantom uart bug)
 */


/************************************************************
  DEFINES
************************************************************/

#define SIO_BASE                    0xD0000000

#define SIO_GPIO_OUT_RW             (SIO_BASE+0x10)
#define SIO_GPIO_OUT_SET            (SIO_BASE+0x14)
#define SIO_GPIO_OUT_CLR            (SIO_BASE+0x18)
#define SIO_GPIO_OUT_XOR            (SIO_BASE+0x1C)

#define SIO_GPIO_OE_RW              (SIO_BASE+0x20)
#define SIO_GPIO_OE_SET             (SIO_BASE+0x24)
#define SIO_GPIO_OE_CLR             (SIO_BASE+0x28)
#define SIO_GPIO_OE_XOR             (SIO_BASE+0x2C)

#define IO_BANK0_BASE               0x40014000

#define IO_BANK0_GPIO25_STATUS_RW   (IO_BANK0_BASE+0x0C8+0x0000)
#define IO_BANK0_GPIO25_STATUS_XOR  (IO_BANK0_BASE+0x0C8+0x1000)
#define IO_BANK0_GPIO25_STATUS_SET  (IO_BANK0_BASE+0x0C8+0x2000)
#define IO_BANK0_GPIO25_STATUS_CLR  (IO_BANK0_BASE+0x0C8+0x3000)

#define IO_BANK0_GPIO25_CTRL_RW     (IO_BANK0_BASE+0x0CC+0x0000)
#define IO_BANK0_GPIO25_CTRL_XOR    (IO_BANK0_BASE+0x0CC+0x1000)
#define IO_BANK0_GPIO25_CTRL_SET    (IO_BANK0_BASE+0x0CC+0x2000)
#define IO_BANK0_GPIO25_CTRL_CLR    (IO_BANK0_BASE+0x0CC+0x3000)


/************************************************************
  INCLUDES
************************************************************/

/************************************************************
  ENUMS AND TYPEDEFS
************************************************************/

/************************************************************
  EXTERN FUNCTIONS
************************************************************/
/* main() is needed from the application software as a launch point */
extern int main( void );

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void DELAY ( unsigned int );
/************************************************************
  GLOBAL FUNCTIONS
************************************************************/

/**
 * @brief Adds all module init functions to the OS Init lists
 * 
 * @note Should be the only place to call OS_ADDINIT()
 */
int BRS_Startup ( void );
