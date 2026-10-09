//Burón Movis César Adrian
#include <stdio.h>
#include <math.h>

int main (void)
{
    float l, p, h, a;

    printf("Caluladora de dimensiones para triáungulos equiláteros\n");
    printf("Ingresa la longitud del lado del triángulo: \n");
    scanf("%f", &l);

    p = 3*l;
    h = (sqrt(3) / 2) * l ;
    a = (sqrt(3)/4) * (l*l);

    printf("Perimetro: %f\n", p);
    printf("Altura: %f\n", h);
    printf("Area: %f\n", a);

    return 0;
}