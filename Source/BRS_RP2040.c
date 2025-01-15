/**
 * @file BRS_RP2040.c
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


/******************************************
  DEFINES
******************************************/
#define BRS_RP2040_ENABLE_LED_SUPPORT

/******************************************
  INCLUDES
******************************************/
#include "BRS_RP2040.h"

/******************************************
  GLOBAL FUNCTIONS
******************************************/
/**
 * FUNC: int BRS_Startup( void )
 * BRIEF: "Startup" C Code that is executed by the assembly startup. Jumps to Main(). Should never return. While(1) is present for error case to avoid unexpected fault/behavior.
 */
int BRS_Startup ( void )
{
    int retval = 0;
#if defined( BRS_RP2040_ENABLE_LED_SUPPORT )
    // //release reset on IO_BANK0
    // PUT32(RESETS_RESET_CLR,1<<5); //IO_BANK0
    // //wait for reset to be done
    // while(1)
    // {
    //     if((GET32(RESETS_RESET_DONE_RW)&(1<<5))!=0) break;
    // }

    // //output disable
    // PUT32(SIO_GPIO_OE_CLR,1<<25);
    // //turn off pin 25
    // PUT32(SIO_GPIO_OUT_CLR,1<<25);

    // //set the function select to SIO (software controlled I/O)
    // PUT32(IO_BANK0_GPIO25_CTRL_RW,5);

    // //output enable
    // PUT32(SIO_GPIO_OE_SET,1<<25);
#endif /* BRS_RP2040_ENABLE_LED_SUPPORT */

    retval = main();

    /* Intentionally loop - should never be reached */
    while(1)
    {
        ;
#if defined( BRS_RP2040_ENABLE_LED_SUPPORT )
        // //turn on the led
        // PUT32(SIO_GPIO_OUT_SET,1<<25);
        // DELAY(0x500000);
        // //turn off the led
        // PUT32(SIO_GPIO_OUT_CLR,1<<25);
        // DELAY(0x500000);
#endif /* BRS_RP2040_ENABLE_LED_SUPPORT */
        
    }

    return(retval);
}
