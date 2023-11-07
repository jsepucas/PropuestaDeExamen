#include <iostream>
#include <cmath>

int main() {
    int limite_maximo = 100;

    for(int a = 1; a <= limite_maximo; ++a) {
        for(int b = a ; b <= limite_maximo; ++b) {
            int c = std::sqrt(a * a + b * b);

            if(c <= limite_maximo && a + b + c <= 2 * limite_maximo && a * a + b * b == c * c) {
                std::cout<< "El triple pitagorico es: " << a << ", " << b << ", " << c << std::end

            }

        }

    }

}