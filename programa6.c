// programa6.c 
//Yuliza Estupiñan Ponce 
//Manipular numeros a nivel de bits
#include <stdio.h>
int main()
{
short ocho, cinco, cuatro, tres, dos, uno;// Declaración de variables tipo short (enteros cortos , 2 bytes normalmente 
//Asignacion de variable cn s representación binaria 
// 8 en binario: 0000 0000 0000 1000
ocho = 8;
// 5 en binario: 0000 0000 0000 0101
cinco = 5;
// 4 en binario: 0000 0000 0000 0100
cuatro = 4;
// 3 en binario: 0000 0000 0000 0011
tres = 3;
// 2 en binario: 0000 0000 0000 0010
dos = 2;
// 1 en binario: 0000 0000 0000 0001
uno = 1;
// Operacion ari
tméticos
printf("Operadores aritméticos\n");
// Operador modulo : devuelve el residuo de la division entera 
printf("5 modulo 2 = %d\n",cinco%dos);
//Operadores logicos/ de bits 
printf("Operadores lógicos\n");
//Desplazamiento a la derecha 
printf("8 >> 2 = %d\n",ocho>>dos);
//Desplazamiento a la izquierda 
printf("8 << 1 = %d\n",ocho<<1);
// AND bit a bit 
printf("5 & 4 = %d\n",cinco&cuatro);
// OR bit a bit 
printf("3 | 2 = %d\n",tres|dos);
printf("\n");// Linea en blanco para separar resultados 
return 0;
}
