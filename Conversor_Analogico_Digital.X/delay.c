/*
 * File:   delay.c
 * Author: 21193634
 *
 * Created on 23 de Junho de 2021, 15:28
 */


#include <xc.h>
#include "delay.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms(1);
        --t;
    }
}
