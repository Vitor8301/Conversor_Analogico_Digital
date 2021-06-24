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
    IHM.print("C:   F:   K:   ");
    while( 1 )
    {
        IHM.printv(1,1, (long)celsius(), 3 );
        IHM.printv(1,6, fahrenheit(), 3 );
        IHM.printv(1,11, kelvin(), 3 );
    }
}
