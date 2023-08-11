#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx
// #include  <msp430xG46x.h>  // MSP430x4xx

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400

#define   debounceVal      250
#define   delay62_5ms      0xFFFF

// LEDs abstraction
#define LEDsOUT            &P1OUT
#define LEDsDIR            &P1DIR
#define LEDsSel            &P1SEL


// PushButtons abstraction
#define PBsInput	   &P2IN 
#define PBsFlag	           &P2IFG 
#define PBsIE	           &P2IE
#define PBsIES             &P2IES
#define PBsSel             &P2SEL 
#define PBsDir             &P2DIR 
#define PB0                0x01
#define PB1                0x02
#define PB2                0x04
#define PB3                0x08
#define signalOUT          &P2OUT
#endif
