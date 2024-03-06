#include <stdio.h>

int main() {
    printf("peso da pessoa(em kg):");
    float peso;
    scanf("%f" , &peso);
    printf("altura da pessoa (em m):");
    float altura;
    scanf ("%f" , &altura);
    float imc = peso / (altura * altura);
    printf (" o imc de uma pessoa com peso %f  kg e altura %f m é igual a %f.\n", peso, altura, imc);
    return 0;
}
