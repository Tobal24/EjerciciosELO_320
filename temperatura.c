#include "config.h"

#define minC 0
#define maxC 100
#define minF -40
#define maxF 212

float CtoF(float c){
    return (c * 9 / 5) + 32;
}

float FtoC(float f){
    return (f - 32) * 5 / 9;
}

int tablaCtoF(){
    printf("Celsius\tFahrenheit\n");
    for(float c = minC; c <= maxC; c += 1){
        printf("%.2f\t%.2f\n", c, CtoF(c));
    }
    return 0;
}

int tablaFtoC(){
    printf("Fahrenheit\tCelsius\n");
    for(float f = minF; f <= maxF; f += 1){
        printf("%.2f\t\t%.2f\n", f, FtoC(f));
    }
    return 0;
}