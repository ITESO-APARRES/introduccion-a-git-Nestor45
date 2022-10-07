/*
* Archivo hello.c que usamos como 
* ejemplo para el ejercicio
*/

#include <stdio.h>

int main(void) {
    printf("hola mundo");
    printf("hello world");
    decirHola("Nestor")
    return 0;
}
void decirHola(char* nombre) {
    printf("Hola %s ¿como estas?", nombre);
}