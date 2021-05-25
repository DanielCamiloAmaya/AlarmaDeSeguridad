/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F15244
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set PUL0 aliases
#define PUL0_TRIS                 TRISCbits.TRISC0
#define PUL0_LAT                  LATCbits.LATC0
#define PUL0_PORT                 PORTCbits.RC0
#define PUL0_WPU                  WPUCbits.WPUC0
#define PUL0_OD                   ODCONCbits.ODCC0
#define PUL0_ANS                  ANSELCbits.ANSC0
#define PUL0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define PUL0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define PUL0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define PUL0_GetValue()           PORTCbits.RC0
#define PUL0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define PUL0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define PUL0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define PUL0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define PUL0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define PUL0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define PUL0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define PUL0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set PUL1 aliases
#define PUL1_TRIS                 TRISCbits.TRISC1
#define PUL1_LAT                  LATCbits.LATC1
#define PUL1_PORT                 PORTCbits.RC1
#define PUL1_WPU                  WPUCbits.WPUC1
#define PUL1_OD                   ODCONCbits.ODCC1
#define PUL1_ANS                  ANSELCbits.ANSC1
#define PUL1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define PUL1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define PUL1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define PUL1_GetValue()           PORTCbits.RC1
#define PUL1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define PUL1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define PUL1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define PUL1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define PUL1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define PUL1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define PUL1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define PUL1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set Sensor aliases
#define Sensor_TRIS                 TRISCbits.TRISC4
#define Sensor_LAT                  LATCbits.LATC4
#define Sensor_PORT                 PORTCbits.RC4
#define Sensor_WPU                  WPUCbits.WPUC4
#define Sensor_OD                   ODCONCbits.ODCC4
#define Sensor_ANS                  ANSELCbits.ANSC4
#define Sensor_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Sensor_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Sensor_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Sensor_GetValue()           PORTCbits.RC4
#define Sensor_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Sensor_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Sensor_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define Sensor_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define Sensor_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define Sensor_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define Sensor_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define Sensor_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set PUL2 aliases
#define PUL2_TRIS                 TRISCbits.TRISC5
#define PUL2_LAT                  LATCbits.LATC5
#define PUL2_PORT                 PORTCbits.RC5
#define PUL2_WPU                  WPUCbits.WPUC5
#define PUL2_OD                   ODCONCbits.ODCC5
#define PUL2_ANS                  ANSELCbits.ANSC5
#define PUL2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PUL2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PUL2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PUL2_GetValue()           PORTCbits.RC5
#define PUL2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PUL2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PUL2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PUL2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PUL2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define PUL2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define PUL2_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define PUL2_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set TRANSISTOR aliases
#define TRANSISTOR_TRIS                 TRISCbits.TRISC6
#define TRANSISTOR_LAT                  LATCbits.LATC6
#define TRANSISTOR_PORT                 PORTCbits.RC6
#define TRANSISTOR_WPU                  WPUCbits.WPUC6
#define TRANSISTOR_OD                   ODCONCbits.ODCC6
#define TRANSISTOR_ANS                  ANSELCbits.ANSC6
#define TRANSISTOR_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define TRANSISTOR_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define TRANSISTOR_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define TRANSISTOR_GetValue()           PORTCbits.RC6
#define TRANSISTOR_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define TRANSISTOR_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define TRANSISTOR_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define TRANSISTOR_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define TRANSISTOR_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define TRANSISTOR_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define TRANSISTOR_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define TRANSISTOR_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/