//Burón Movis César Adrian
#include <stdio.h>

int main (void)
{   
    float dis, min, seg, cen;
    float tse, vms, vkh;
    printf("Ingrese la distancia recorrida en metros\n");
    scanf("%f", &dis);
    printf("Ingrese el tiempo en minutos \n");
    scanf("%f", &min);
    printf("Ingrese el tiempo en segundos \n");
    scanf("%f", &seg);
    printf("Ingrese el tiempo en centésimas \n");
    scanf("%f", &cen);

    tse = (min * 60) + seg + (cen / 100);
    vms = dis / tse;
    vkh = (vms*3600)/1000;
    printf("La velocidad del participante es: %f km/h", vkh);

    return 0;
}