#include <stdio.h>
#include "Conversion.h"


int main (void) {
  printf("Tabla de conversion de celsius a fahrenheit\n\n");
    printf("%-6s \t %-6s \n", "C", "F");
    
    double fahr;
    
    for (double celsius = 0; celsius <= 300; celsius = celsius + 20) {
        fahr = Fahrenheit(celsius);
        printf("%-6.1f \t %-6.1f \n", celsius, fahr);
    }

    printf("\n\n\n");

  printf("Tabla de conversion de fahrenheit a celsius\n\n");
    printf("%-6s \t %-6s \n", "F", "C");

    double celsius;

    for (double fahr = 0; fahr <= 300; fahr += 20) {
        celsius = Celsius(fahr);
        printf("%-6.1f \t %-6.1f \n", fahr, celsius);
    }

    printf("\n\n\n");


    return 0;
}

