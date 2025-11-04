// Yuliza Estupiñan 
// 04 de noviembre 2025
//estructura de control selectiva


#include <stdio.h>  

int main()
{
    char op = '\0';  
    // Se declara una variable de tipo carácter llamada 'op'.
    // Se inicializa con '\0' (carácter nulo) para evitar valores basura.

    printf("\tMenú\n\n");  
    // Muestra el título del menú en pantalla.
    // '\t' agrega una tabulación (espacio horizontal grande).
    // '\n\n' imprime dos saltos de línea para dejar un espacio después del título.

    // Se muestran las opciones disponibles en el menú
    printf("Elegir la opción deseada\n");   // Mensaje que pide al usuario que elija una opción.
    printf("a) Ingresar\n");                // Opción 'a' → Ingresar
    printf("b) Registrarse\n");             // Opción 'b' → Registrarse
    printf("c) Salir\n");                   // Opción 'c' → Salir

    scanf("%c", &op);
    // Se lee un carácter ingresado por el usuario y se guarda en la variable 'op'.
    // Si el usuario escribe 'a', 'b' o 'c', esa letra se almacena en 'op'.

    switch(op)
    {
        default:
            // Este bloque se ejecuta si el usuario ingresa un carácter distinto
            // de 'a', 'b' o 'c'.
            printf("Opción no válida.\n");
            break;  // Sale del switch

        case 'a':
            // Si el usuario eligió 'a', se muestra el siguiente mensaje:
            printf("Se seleccionó 'Ingresar'.\n");
            break;  // Termina este caso

        case 'b':
            // Si el usuario eligió 'b', se muestra este mensaje:
            printf("Se seleccionó 'Registrarse'.\n");
            break;  // Termina este caso

        case 'c':
            // Si el usuario eligió 'c', se muestra este mensaje:
            printf("Se seleccionó 'Salir'.\n");
            break;  // Termina este caso
    }

    return 0;  
   
}
