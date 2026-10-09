//Burón Movis César Adrian
#include <stdio.h>
 int main (void)
 {
    float sO;
    float vO;
    float a;
    float t;
    float s;

    printf("Calculadora del dezplazamiento de un cuerpo \n");
    printf("Ingresa los datos para la ecuación: \n");
    printf("Ingresa el desplazamiento inicial del cuerpo en metros\n");
    scanf("%f",  &sO);
    printf("Ingresa la velocidad inicial del cuerpo en m/s\n");
    scanf("%f", &vO);
    printf("Ingresa la aceleración del cuerpo en m/s^2 \n");
    scanf("%f", &a);
    printf("Ingresa el tiempo de movimiento del cuerpo en (s)\n");
    scanf("%f", &t);

    s = sO + (vO * t) + (a)*(t*t)*0.5;
    printf("El desplazamiento del cuerpo es %f m" , s );
    return 0;
 }