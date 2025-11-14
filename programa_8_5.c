// Yuliza estupiñan 
// 14 de noviembre del 2025 
// Estructura de repetición for

 #include <stdio.h>   

int main ()
{
    int enteroNumAlumnos = 5;         // Cantidad de alumnos (número fijo: 5)
    float realCalif = 0.0,            // Variable para almacenar la calificación ingresada
          realPromedio = 0.0;         // Acumulador para sumar las calificaciones

    printf("\tPromedio de calificaciones\n");  // Título del programa

    // Bucle 'for' que se repetirá 5 veces (una por cada alumno)
    for (int indice = 0 ; indice < enteroNumAlumnos ; indice++)
    {
        printf("\nIngrese la calificación del alumno %d\n", indice + 1);
        scanf("%f", &realCalif);     // Lee la calificación ingresada por el usuario

        realPromedio += realCalif;   // Suma la calificación al acumulador
    }

    // Calcula y muestra el promedio general
    printf("\nEl promedio de las calificaciones ingresadas es: %f\n",
           realPromedio / enteroNumAlumnos);

    return 0;  
}

