// Yuliza Estrupiñan Ponce 
//24 de octubre del 2025 




#include<stdio.h>
int main ()
{
    int a, b;      // Declaración de dos variables enteras
    a = 10;        // Se asigna el valor 10 a la variable 'a'
    b = 25;        // Se asigna el valor 25 a la variable 'b'

    if (a > b)     // Se evalúa si 'a' es mayor que 'b'
    {
        // Este bloque se ejecuta solo si la condición es verdadera
        printf("\ta (%d) es mayor que b (%d).\n", a, b);
    }

    // Este mensaje se muestra siempre, sin importar la condición anterior
    printf("\tEl programa continúa con su ejecución normal.\n")
return 0;
}
