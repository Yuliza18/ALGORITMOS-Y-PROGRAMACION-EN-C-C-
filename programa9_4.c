// Yuliza Estupiñan 
// 27 de noviembre del 2025 
// Apuntadores 


#include<stdio.h>   

int main ()
{
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    /* Se declaran las variables enteras 'a' y 'b', y un arreglo 'c' de 10 enteros.
       'a' se inicializa en 5, 'b' en 10 y el arreglo c con los valores indicados. */

    int *apEnt; // Se declara un apuntador a entero llamado 'apEnt'.

    apEnt = &a;  
    // El apuntador 'apEnt' ahora almacena la dirección de memoria de la variable 'a'.

    printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
    printf("apEnt = &a\n");

    /* A la variable b se le asigna el contenido de la variable a la que
       apunta apEnt. Es decir, b = a, ya que apEnt apunta a 'a'. */
    b = *apEnt;
    printf("b = *apEnt \t-> b = %i\n", b);

    /* A la variable b se le asigna el contenido de la variable a la que
       apunta apEnt más 1. Como *apEnt vale 5 (valor actual de 'a'),
       entonces b = 5 + 1 = 6 */
    b = *apEnt + 1;
    printf("b = *apEnt + 1 \t-> b = %i\n", b);

    // A la variable a (a la que apunta apEnt) se le asigna el valor 0
    *apEnt = 0;
    /* Esto modifica directamente a 'a', porque apEnt apunta a la memoria de 'a'.
       Ahora a = 0. */

    printf("*apEnt = 0 \t-> a = %i\n", a);

    return 0; 
}

