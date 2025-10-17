//programa_2.c
// Yuliza Estupinan 
//17 de octubre del 2025 
// asignacion de variable a tipo 

 

#include <stdio.h>
int main() {
short enteroNumero1 =335;
signed int enteroNumero2 =95;
unsigned long enteroNumero3 = 879;
char caracterA = 50;
char caracterB = 'B';
float puntoFlotanteNumero1 =69.8;
unsigned double puntoFlotanteNumero2 = 7898.2236;
return 0;

//Funciones de salida de datos en pantalla

//Declaración de variables
int entero;
float flotante;
double doble;
char caracter;
//Asignación de variables
entero = 44;
flotante =4.5f;
doble = 6.110;
caracter ='A';
printf("La variable entera tiene valor: %i \n", entero);
printf("La variable flotante tiene valor: %f \n", flotante);
printf("La variable doble tiene valor: %f \n", doble);
printf("La variable caracter tiene valor: %c \n", caracter);
printf("Entero como octal: %o \n Como Hexadecimal %X \n", entero, entero);
printf("Flotante con precisión: %5.2f \n", flotante);
printf("Doble con precisión: %5.2f \n", doble);
printf("Carácter como entero: %d \n", caracter); 
}
