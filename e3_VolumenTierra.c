//Burón Movis César Adrian
#include <stdio.h>
#include<math.h>

int main (void)
{
    float v, a, b;
    a = 6378.137;
    b = 6356.752;
    
    printf("Calculadora del volúmen de la tierra \n");
    printf("El volúmen de la tierra se calcula como: \n");
    printf("V= 4/3 π *a^2 * b \n");
    printf("(a) el radio ecuatorial, el cual mide 6378.137 km\n");
    printf("(b) es el radio polar, el cual mide 6356.752 km\n");
    
    v = (4/3) * (  M_PI * a* a * b);
    printf("El volúmen de la tierra es: %f", v); 

    return 0;
}