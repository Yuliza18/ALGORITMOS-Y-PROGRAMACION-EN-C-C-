// Yuliza Estupiñan 
// 27 de noviembre de 2025 
// Apuntadores y  su relacion con los arreglos 

#include <stdio.h>   

int main ()
{
    int arr[] = {5, 4, 3, 2, 1};
    /* Se declara un arreglo de enteros 'arr' con 5 elementos.
       arr[0] = 5
       arr[1] = 4
       arr[2] = 3
       arr[3] = 2
       arr[4] = 1 */

    int *apArr;  // Se declara un apuntador a entero llamado apArr.
    int x;       // Variable entera donde se guardarán valores usando el apuntador.

    apArr = arr;
    /* En C, el nombre de un arreglo (arr) representa la dirección del primer elemento,
       es decir, &arr[0].
       Por lo tanto, apArr ahora apunta a arr[0]. */

    printf("int arr[] = {5, 4, 3, 2, 1};\n");
    printf("apArr = &arr[0]\n");

    // A la variable x se le asigna el contenido del arreglo arr en su elemento 0.
    x = *apArr;
    /* *apArr accede al valor almacenado en la posición a la que apunta apArr.
       Como apArr apunta a arr[0], entonces x = 5. */

    printf("x = *apArr \t -> x = %d\n", x);

    // A la variable x se le asigna el contenido del arreglo arr en su elemento 1.
    x = *(apArr + 1);
    /* apArr + 1 significa "mover el apuntador al siguiente elemento del arreglo".
       En los arreglos, aumentar el apuntador en 1 lo mueve al siguiente entero.

       apArr + 1  → dirección de arr[1]
       *(apArr + 1) → valor de arr[1], que es 4.
    */

    printf("x = *(apArr + 1) \t -> x = %d\n", x);

    return 0;
}

