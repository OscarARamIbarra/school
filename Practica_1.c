/*
 * File:   Practica_1.c
 * Author: Oscar A Ramirez I
 *
 * Created on 16 de febrero de 2021, 12:41 PM
 */


#pragma config FOSC = INTOSCIO
#pragma config WDTEN = OFF
#pragma config MCLRE = ON
#pragma config LVP = OFF
#pragma config ICPRT = OFF

#include <xc.h>

#define _XTAL_FREQ 1000000

void main(void){
    TRISA=0;
    ANSELA=0;
    
    while(1)
    { 
        PORTA =0xFF;
        __delay_ms(500);
        PORTA -=1;
    }
    return;
}
