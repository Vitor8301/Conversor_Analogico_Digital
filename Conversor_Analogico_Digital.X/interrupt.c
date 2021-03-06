/*
 * File:   interrupt.c
 * Author: 21193634
 *
 * Created on 23 de Junho de 2021, 15:29
 */


#include <xc.h>
#include "timers.h"
#include "adc.h"


void __interrupt() isr(void)
{
    if( INTCONbits.T0IF )
    {
        INTCONbits.T0IF = 0;
        T0_int();
    }
    if( PIR1bits.TMR1IF )
    {
        PIR1bits.TMR1IF = 0;
        T1_int();
    }
    if( PIR1bits.TMR2IF )
    {
        PIR1bits.TMR2IF = 0;
        T2_int();
    }
    if( PIR1bits.ADIF )
    {
        PIR1bits.ADIF = 0;
        ADC_int();
    }
}
