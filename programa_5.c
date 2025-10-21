//Programa_4.c
//Yuliza Estupiñan Ponce 
//21 de octubre del 2025  
//Almacenar e imprimir variable 
#include <stdio.h>
int main()
{
int enteroNumero;
char caracterA = 65; // Convierte el entero a carácter ASCII.
double puntoFlotanteNumero;
// Asignar valor de teclado a una variable.
printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);
// Imprimir valores con formato.
printf("\nImprimiendo las variables \a\n");// Muestra en pantalla un mensaje que dice imprimiendo las variables y hace un sonido de alerta 
printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);// Muestra en pantalla el mensaje " valor de entero Numero =" seguido del nùmero guardado en enteroNumero, con un pequeño espacio al inicio y un sonido de alerta 
printf("\t Valor de caracterA = %c \a\n", caracterA);
printf("\t Valor de puntoFlotanteNumero = %lf \a\n",// Muestra en pantalla  el valor guardado en puntoFlotanteNumero  con un espacio al inicio y un sonido 
puntoFlotanteNumero);
printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
printf("\t Valor de puntoFlotanteNumero\n");
printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;
}
