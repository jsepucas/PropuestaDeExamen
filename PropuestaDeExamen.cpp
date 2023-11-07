#include <iostream>
#include <cmath>

int main() {
    // Establezco un límite para los valores de a, b y c.
    int limite_maximo = 100;

    // Repito dos veces el bucle, para "a"
    for(int a = 1; a <= limite_maximo; ++a) {
    // Repito de nuevo dos veces el bucle para "b"
        for(int b = a ; b <= limite_maximo; ++b) {
            //Calculo el lado "c"
            int c = std::sqrt(a * a + b * b);
    //Verifico si es un triple pitagorico, cumpliendo así las condiciones indicadas
            if(c <= limite_maximo && a + b + c <= 2 * limite_maximo && a * a + b * b == c * c) {
    //Por último, hago que salga en la consola el resultado del triple pitagorico
                std::cout<< "El triple pitagorico es: " << a << ", " << b << ", " << c << std::endl;

            }

        }

    }
    return 0;

}