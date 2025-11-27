x// Yuliza Estupiñan 
// 27 de noviembre del 2025 
//Apuntadores en ciclo for
#include <stdio.h>  

int main ()
{
    int lista[5] = {10, 8, 5, 8, 7};  // Se declara el arreglo 'lista' con 5 elementos
    int *ap = lista;  // Se declara el apuntador 'ap' y lo inicializa con la dirección del primer elemento de 'lista'
    int indice;  // Variable para el índice del ciclo 'for'

    printf("\tLista\n");

    // Se accede a cada elemento del arreglo haciendo uso de un ciclo 'for'.
    // 'ap' es un apuntador que apunta al primer elemento de 'lista'. Al sumar 'indice' al apuntador, podemos acceder a cada elemento del arreglo.
    for (indice = 0; indice < 5; indice++)
    {
        printf("\nCalificación del alumno %d es %d", indice + 1, *(ap + indice));
        /* 'ap + indice' mueve el apuntador 'ap' a la dirección del elemento 'indice' del arreglo,
           y '*' desreferencia ese apuntador para obtener el valor almacenado en esa dirección. */
    }
    
    printf("\n");  // Imprime un salto de línea al final

    return 0;  
}
