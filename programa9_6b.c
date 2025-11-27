// Yuliza Estupiñan 
// 27 de noviembre del 2025 
//Apuntadores en ciclo while
#include <stdio.h>  

int main()
{
    int lista[5] = {10, 8, 5, 8, 7};  // Se declara el arreglo 'lista' con 5 elementos
    int *ap = lista;  // Se declara un apuntador 'ap' y lo inicializa con la dirección del primer elemento del arreglo 'lista'
    int indice = 0;   // Variable de control para el ciclo 'while'

    printf("\tLista\n");

    // Ciclo 'while' para recorrer el arreglo 'lista' y acceder a cada uno de sus elementos.
    // El ciclo continuará mientras el valor de 'indice' sea menor que 5.
    while (indice < 5)
    {
        // Se imprime la calificación del alumno usando el apuntador 'ap' y el valor de 'indice'.
        // *(ap + indice) desreferencia el apuntador desplazado por 'indice' posiciones.
        printf("\nCalificación del alumno %d es %d", indice + 1, *(ap + indice));

        // Incrementamos 'indice' para movernos al siguiente elemento del arreglo.
        indice++;
    }

    printf("\n");  // Imprime un salto de línea al final para una salida más limpia

    return 0;  
}
