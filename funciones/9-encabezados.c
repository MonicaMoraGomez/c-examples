#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;
    int p;
    int c;

    // Llama a las funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    p = funcion4(10);
    c = funcion5(10);

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    // Imprime el valor que retornó funcion5()
    printf("c = %d\n", c);
    // Imprime el valor que retornó funcion4()
    printf("p = %d\n", p);

    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}
// funcion4(): Imprime un mensaje. Retorna el valor que recibió como argumento
// disminuyendo en 2
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x - 2;
    return y;
}
// funcion5(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 4
int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 4;
    return y;
}
