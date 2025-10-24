// Yuliza estupiñan 
// 24 de octubre del 2025 

#include<stdio.h>
int main()
{
    int valor; // Variable donde se guardará el número ingresado por el usuario

    // Se pide al usuario que ingrese un número entero
    printf("Ingresa un número entero: ");
    scanf("%d", &valor);

    // Si el valor ingresado es 0, la condición es falsa
    if (valor == 0)
    {
        printf("Esta instrucción nunca se ejecuta\n");
        printf("porque la condición es falsa (0).\n");
    }

    // Si el valor ingresado es diferente de 0, la condición es verdadera
    if (valor) // En C, cualquier número distinto de 0 es verdadero
        printf("Esta instrucción se ejecuta porque el valor es diferente de 0.\n");

    return 0; 
}
