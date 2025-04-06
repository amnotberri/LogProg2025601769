#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para calcular el IMC
int toInt(char* text);
double toDouble(char* text);

int main() {
    int peso;
    double estatura;

    printf("Cual es tu peso?\n");
    scanf("%d", &peso);
    printf("Cual es tu estatura?\n");
    scanf("%lf", &estatura);
    
    double iMC;
    iMC = peso / (estatura * estatura);
    
    printf("Tu IMC es de %.2f\n", iMC);
    if (iMC <= 18.4) {
        printf("Bajo Peso\n");
    } else if (iMC >= 18.5 && iMC <= 24.9) {
        printf("Normal\n");
    } else if (iMC >= 25.0 && iMC <= 29.9) {
        printf("Sobrepeso\n");
    } else if (iMC >= 30.0 && iMC <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (iMC >= 35.0 && iMC <= 39.9) {
        printf("Obesidad clase 2\n");
    } else if (iMC >= 40.0) {
        printf("Obesidad clase 3\n");
    } else {
        printf("ERROR, INTENTALO DE NUEVO\n");
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