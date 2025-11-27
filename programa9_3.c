// Yuliza Estupiñan 
// 27 de noviembre del 2025 
// Apuntadores 

#include <stdio.h> 

int main() {
    char *ap, c = 'a';  // Se declara un apuntador 'ap' de tipo char y una variable 'c' de tipo char con valor 'a'
    
    ap = &c;  // Se le asigna al apuntador 'ap' la dirección de memoria de la variable 'c'
    
    // Imprime el contenido de la variable 'c' a través del apuntador 'ap'.
    // El operador *ap dereferencia el apuntador, es decir, obtiene el valor al que apunta.
    printf("Carácter: %c\n", *ap);  
    
    // Imprime el código ASCII del carácter que almacena 'c'.
    // De nuevo, *ap accede al valor de 'c' y se imprime su código ASCII como un número entero.
    printf("Código ASCII: %d\n", *ap);  
    
    // Imprime la dirección de memoria almacenada en el apuntador 'ap'.
    // La dirección de memoria de 'c' es lo que contiene 'ap'.
    // Usamos '%p' para imprimir direcciones de memoria, pero en este caso está usando '%d' para imprimir como entero.
    printf("Dirección de memoria: %d\n", ap);  // Nota: para direcciones de memoria, lo más apropiado sería usar %p

    return 0;  
}

