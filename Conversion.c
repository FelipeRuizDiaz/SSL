#include <stdio.h>
#include "Conversion.h"

double Celsius(double fahr) {
    double celsius =  5.0/9.0 * (fahr - 32.0) ;
    return celsius;
}

double Fahrenheit(double celsius) {
    double fahr = ( celsius * 9.0/5.0 ) + 32.0;
    
    return fahr;
}