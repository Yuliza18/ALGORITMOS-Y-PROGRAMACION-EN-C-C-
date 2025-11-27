// Yuliza Estupiñan 
// 27 de noviembre del 2025 
// Apuntadores en ciclo do-while
#include <stdio.h>  

int main()
{
    // Lista modificada con nuevas calificaciones
    int lista[5] = {9, 7, 6, 10, 8};  
    int *ap = lista;  // Apuntador que apunta al primer elemento del arreglo 'lista'
    int indice = 0;   // Variable de control para el ciclo

    printf("\tLista\n");

    // Ciclo do-while para recorrer el arreglo 'lista' y acceder a cada uno de sus elementos
    do
    {
        // Imprime la calificación del alumno en el índice 'indice' utilizando el apuntador 'ap'
        printf("\nCalificación del alumno %d es %d", indice + 1, *(ap + indice));

        // Incrementa 'indice' para pasar al siguiente elemento del arreglo en la siguiente iteración
        indice++;
    }
    while (indice < 5);  // El ciclo continúa mientras 'indice' sea menor que 5

    printf("\n");  // Salto de línea al final para una salida más limpia

    return 0;  
}
