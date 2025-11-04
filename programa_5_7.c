// Yuliza Estupiñan 
// 04 de noviembre 2025 
// Estructura de control selectiva 
#include <stdio.h>  

int main()
{
    int uno, dos, tres;  // Declaramos tres variables enteras para guardar los números ingresados

    printf ("Ingrese 3 números separados por espacios:\n");  
    // Se pide al usuario que ingrese tres números

    scanf ("%d %d %d", &uno, &dos, &tres);
    // Se leen tres números enteros desde el teclado y se almacenan en las variables uno, dos y tres

    // Comenzamos las comparaciones para determinar el orden de mayor a menor
    if (uno > dos)
    {
        if (dos > tres)
        {
            // Caso: uno > dos > tres
            printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
        }
        else
        {
            if (uno > tres)
            {
                // Caso: uno > tres > dos
                printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
            }
            else
            {
                // Caso: tres > uno > dos
                printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
            }
        }
    }
    else  // Si no se cumple que uno > dos
    {
        if (dos > tres)
        {
            if (tres > uno)
            {
                // Caso: dos > tres > uno
                printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
            }
            else
            {
                // Caso: dos > uno > tres
                printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
            }
        }
        else
        {
            // Caso: tres > dos > uno
            printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
        }
    }

    return 0;  
}

