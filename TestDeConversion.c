#include <assert.h>
#include "Conversion.h"
#include <stdlib.h>


int sonIguales(double x, double y);


int main(void) {

    assert(sonIguales(Celsius(0.0),-17.8) == 1);
    assert(sonIguales(Celsius(160.0),71.1) == 1);
    assert(sonIguales(Celsius(300.0),148.9) == 1);

    
    assert(sonIguales(Fahrenheit(0.0),32.0) == 1);
    assert(sonIguales(Fahrenheit(160.0),320.0) == 1);
    assert(sonIguales(Fahrenheit(300.0),572.0) == 1);

    return 0;}

int sonIguales(double x, double y) {
    return abs(x-y) < 0.001;
}