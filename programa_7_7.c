// Yuliza Estupiñan
// 06 de noviembre del 2025
//Variables tipo enumeración


#include <stdio.h>

int main()
{
    // declaración de la enumeración
    enum boolean {NO, YES};       // Se declara una enumeración llamada 'boolean' con dos posibles valores: NO = 0 y YES = 1

    // declaración de una variable tipo enumeración
    enum boolean valorBooleano;   // Se declara una variable de tipo 'enum boolean'

    valorBooleano = YES;          // Se asigna el valor YES (1) a la variable 'valorBooleano'

    // Se comprueba que el valor de una enumeración es entero
    printf("%d\n", valorBooleano); // Se imprime el valor numérico asociado a YES, que es 1

    // Se comprueba que el valor de una enumeración se puede reasignar
    enum diasSemana {LUNES, MARTES, MIERCOLES=5, JUEVES, VIERNES};
    // Se declara otra enumeración llamada 'diasSemana' donde:
    // LUNES = 0 (por defecto)
    // MARTES = 1 (por defecto, siguiente valor)
    // MIERCOLES = 5 (asignado explícitamente)
    // JUEVES = 6 (continúa a partir del anterior)
    // VIERNES = 7 (continúa a partir del anterior)

    printf("\n%d", LUNES);        // Imprime 0 (valor de LUNES)
    printf("\n%i", MARTES);       // Imprime 1 (valor de MARTES)
    printf("\n%d", MIERCOLES);    // Imprime 5 (valor de MIERCOLES)
    printf("\n%i", JUEVES);       // Imprime 6 (valor de JUEVES)
    printf("\n%d\n", VIERNES);    // Imprime 7 (valor de VIERNES)

    return 0;
}
