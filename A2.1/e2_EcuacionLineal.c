//Burón Movis César Adrian

#include <stdio.h>

int main (void)
{
    float a; float b; float c;
    float d; float e; float f;
    float x; float y; float det;

    printf("Lector de sistema de ecuaciones lineales \n");
    printf("Dados: \n");
    printf("ax + by = c \n");
    printf("dx + ey = f\n");
    printf("Para encontrar los valores de (x) y de (y) ingresa los coeficientes:\n");
    printf("Ingresa el valor de a\n");
    scanf ("%f", &a);
    printf("Ingresa el valor de b\n");
    scanf("%f", &b);
    printf("Ingresa el valor de c\n");
    scanf("%f", &c);
    printf("Ingresa el valor de d\n");
    scanf("%f", &d);
    printf("Ingresa el valor de e\n");
    scanf("%f", &e);
    printf("Ingresa el valor de f\n");
    scanf("%f", &f);

   det = (a * e) - (b * d);

    if (det == 0) 
        {
         printf("\nError: El sistema no tiene solución única (el determinante es 0).\n");
        } 
    else {
        x = ((c * e) - (b * f)) / det;
        y = ((a * f) - (c * d)) / det;

        printf("Resolviendo el sistema los valores son: \n");
        printf("x: %f\n ", x );
        printf("y: %f\n ", y);
    }
    return 0;
}