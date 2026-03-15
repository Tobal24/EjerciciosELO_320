#include "config.h"

int main(){
#if defined(EJERCICIO_1)
    printf("Tabla de conversion de Celsius a Fahrenheit:\n");
    tablaCtoF();
    printf("\nTabla de conversion de Fahrenheit a Celsius:\n");
    tablaFtoC();
    return 0;
#elif defined(EJERCICIO_2)
    count();
    return 0;
#elif defined(EJERCICIO_3)
    repeat();
    return 0;
#elif defined(EJERCICIO_4)
    histograma();
    return 0;
#elif defined(EJERCICIO_5)
    larger();
    return 0;
#elif defined(EJERCICIO_6)
    final();
    return 0;
#endif
}
