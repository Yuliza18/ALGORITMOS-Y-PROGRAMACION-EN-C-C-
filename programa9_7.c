// Yuliza Estupiñan 
// 27 de noviembre del 2025 
// Apuntadores en cadenas
#include <stdio.h>  

int main()
{
    char palabra[20];  // Se declara un arreglo de caracteres (cadena) de tamaño 20
    int i = 0;  // Variable de control para el ciclo 'for'

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);  
    /* 'scanf("%s", palabra)' lee una cadena de caracteres introducida por el usuario.
       Se omite el uso de '&' porque 'palabra' es el nombre del arreglo y representa
       la dirección de su primer elemento (equivalente a &palabra[0]). */

    printf("La palabra ingresada es: %s\n", palabra);  // Imprime la palabra ingresada

    // Ciclo 'for' para recorrer cada carácter de la cadena 'palabra'
    // Nota: En C, las cadenas terminan con un carácter nulo '\0', por lo que el ciclo debe terminar cuando lleguemos a '\0'.
    for (i = 0; i < 20; i++) {
        if (palabra[i] == '\0')  // Verificamos si llegamos al final de la cadena
            break;  // Si encontramos el carácter nulo '\0', salimos del ciclo

        // Imprimir el carácter de la palabra en la posición 'i'
        printf("Carácter %d: %c\n", i + 1, palabra[i]);
    }

    return 0;  
}
