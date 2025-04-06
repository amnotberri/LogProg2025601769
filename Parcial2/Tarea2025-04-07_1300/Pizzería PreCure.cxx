#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Headers
int toInt(char* text);
double toDouble(char* text);

int main() {
    char pizzaV[10];
    char ingrediente[50];

    printf("Bienvenido a pizzas PreCure!\n");
    printf("¿Quiere una pizza vegetariana?\n");
    scanf("%s", pizzaV);

    if (strcmp(pizzaV, "si") == 0) {
        printf("De acuerdo! estos son nuestros ingredientes, elija solo uno\n");
        printf("Pimiento\n");
        printf("Tofu\n");
        scanf("%s", ingrediente);
        printf("ok! Prepararemos una pizza vegetariana con mozzarella, tomate y %s\n", ingrediente);
    } else {
        printf("De acuerdo! estos son nuestros ingredientes, elija solo uno\n");
        printf("Peperoni\n");
        printf("Jamon\n");
        printf("Salmon\n");
        scanf("%s", ingrediente);
        printf("ok! Prepararemos una pizza no vegetariana con mozzarella, tomate y %s\n", ingrediente);
    }

    return 0;
}

// Función para convertir una cadena a entero
int toInt(char* text) {
    return atoi(text);
}

// Función para convertir una cadena a double
double toDouble(char* text) {
    return atof(text);
}