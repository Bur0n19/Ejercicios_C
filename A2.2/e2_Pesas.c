//Burón Movis César Adrian

#include <stdio.h>

int main() {
    int peso, cantidad;

    printf("Ingrese el peso en gramos (1 a 10000): ");
    scanf("%d", &peso);

    if (peso > 0 && peso <= 10000) {
        printf("Pesas necesarias:\n");

        cantidad = peso / 1000;
        if (cantidad > 0) {
            printf("%d pesas de 1000g\n", cantidad);
        }
        peso = peso % 1000;

        cantidad = peso / 500;
        if (cantidad > 0) {
            printf("%d pesas de 500g\n", cantidad);
        }
        peso = peso % 500;

        cantidad = peso / 200;
        if (cantidad > 0) {
            printf("%d pesas de 200g\n", cantidad);
        }
        peso = peso % 200;

        // Se agregó el bloque de 100g que faltaba en tu captura
        cantidad = peso / 100;
        if (cantidad > 0) {
            printf("%d pesas de 100g\n", cantidad);
        }
        peso = peso % 100;

        cantidad = peso / 50;
        if (cantidad > 0) {
            printf("%d pesas de 50g\n", cantidad);
        }
        peso = peso % 50;

        cantidad = peso / 10;
        if (cantidad > 0) {
            printf("%d pesas de 10g\n", cantidad);
        }
        peso = peso % 10;

        cantidad = peso / 5;
        if (cantidad > 0) {
            printf("%d pesas de 5g\n", cantidad);
        }
        peso = peso % 5;

        cantidad = peso / 2;
        if (cantidad > 0) {
            printf("%d pesas de 2g\n", cantidad);
        }
        peso = peso % 2;

        if (peso > 0) {
            printf("%d pesas de 1g\n", peso);
        }

    } else {
        printf("Peso fuera del rango permitido.\n");
    }

    return 0;
}