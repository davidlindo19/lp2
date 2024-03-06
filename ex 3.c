#include <stdio.h>

int main () {
    printf("temperatura(em graus celsius): ");
    float tempC;
    scanf("%f" , &tempC);
    float tempF = 9.0/5.0 * tempC + 32;
    printf("uma temperatura de %f graus celsius equivale a %f graus fahrenheit. \n" , tempC , tempF);
    return 0;
}
