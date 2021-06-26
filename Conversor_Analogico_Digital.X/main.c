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
    IHM.init( );
    ADC_init( );
    
    while( 1 )
    {
        IHM.print( "C:   F:   K:    " );
        IHM.printv( 1, 1, (long)celsius( ), 3 );
        IHM.printv( 1, 6, fahrenheit( ), 3 );
        IHM.printv( 1, 11, kelvin( ), 3 );
        delay( 5000 );
        dispLCD_clr();
        IHM.print( "Re:     Ra:     " );
        IHM.printv( 1, 3, reaumur( ) , 3 );
        IHM.printv( 1, 10, rankine( ), 3 );
        delay( 5000 );
        dispLCD_clr();
    }
}
  