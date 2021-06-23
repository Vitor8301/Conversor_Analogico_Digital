/*
 * File:   main.c
 * Author: 21193634
 *
 * Created on 23 de Junho de 2021, 15:31
 */


#include "config.h"
#include <xc.h>
#include "delay.h"
#include "ihm.h"
#include "timers.h"
#include "adc.h"

void main(void)
{
    IHM.init();
    ADC_init();
    IHM.print("ADC: ");
    while( 1 )
    {
        IHM.printv(0,5, (int)ADC_read(), 4 );
    }
}
