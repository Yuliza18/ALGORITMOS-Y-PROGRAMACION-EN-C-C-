// Yuliza Estupiñan 
// 14 de noviembre del 2025b 
//Código (define)

#include <stdio.h>     
#define MAX 5          // Constante que define el tamaño del arreglo

int main ()
{
    int arreglo[MAX], cont;   // 'arreglo' almacena 5 enteros; 'cont' es el contador para los ciclos

    // Primer ciclo: llenar el arreglo con valores ingresados por el usuario
    for (cont = 0; cont < MAX; cont++)
    {
        printf("Ingrese el valor %d del arreglo: ", cont + 1);
        scanf("%i", &arreglo[cont]);   // Guarda el valor ingresado en la posición correspondiente
    }

    // Imprime los valores almacenados en el arreglo
    printf("El valor ingresado para cada elemento del arreglo es:\n[");
    for (cont = 0; cont < MAX; cont++)
    {
        printf("%d\t", arreglo[cont]);  // Muestra cada elemento del arreglo
    }
    printf("]\n");   // Cierra la lista visual del arreglo

    return 0;   
}

