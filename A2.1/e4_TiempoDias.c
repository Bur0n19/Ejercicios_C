//Burón Movis César Adrian
#include <stdio.h>
int main (void)
{
    int d, h, m;
    int suma;
    int ad, ah, am;

    printf("Calculadora de segundos en (n) días, horas, minutos  \n");
    printf("Ingresa la cantidad de días:  \n");
    scanf("%d", &d);
    printf("Ingresa la cantidad de horas: \n");
    scanf("%d", &h);
    printf("Ingresa la cantidad de minutos:  \n");
    scanf("%d", &m);

    ad = d * 86400;
    ah = h * 3600;
    am = m * 60;
    suma = ad + ah + am;

    printf("El total equivalente es:  \n");
    printf("Días: %d\n", ad);
    printf("Horas: %d\n", ah);
    printf("Minutos: %d\n", am);
    printf("Total de segundos: %d\n", suma);

    return 0;
}