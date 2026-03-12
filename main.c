#include <stdio.h>
#include "temperatura.h"

int main(){
    float c, f;
    c = 25.0;
    f = CtoF(c);
    printf("%.2f grados Celsius son %.2f grados Fahrenheit\n", c, f);
    return 0;
}
