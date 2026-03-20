#include "config.h"

int main(){
    int len;
    printf("ingrese la cantidad de datos: \n");
    scanf("%d", &len);
    float data[len];
    printf("ingrese los datos: \n");
    for(int i = 0; i < len; ++i){
        scanf("%f", &data[i]);
    }
    stats s;
    get_stats(&s, data, len);
    printf("max: %f\n", s.max);
    printf("min: %f\n", s.min);
    printf("range: %f\n", s.range);
    printf("mean: %f\n", s.mean);
    printf("median: %f\n", s.median);
    printf("desvest: %f\n", s.dev);
    return 0;
}
