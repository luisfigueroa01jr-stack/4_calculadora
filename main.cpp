// Ejercicio 4: Sobrecarga de metodos con la clase Calculadora
#include <iostream>
#include "Calculadora.h"

int main() {
    std::cout << "=== 4. Sobrecarga de metodos ===" << std::endl;

    Calculadora calc;

    // El compilador elige la version segun el numero y tipo de argumentos
    std::cout << "sumar(5, 3)      = " << calc.sumar(5, 3) << std::endl;
    std::cout << "sumar(5, 3, 2)   = " << calc.sumar(5, 3, 2) << std::endl;
    std::cout << "sumar(2.5, 3.75) = " << calc.sumar(2.5, 3.75) << std::endl;
    std::cout << "sumar(5, 3.5)    = " << calc.sumar(5, 3.5) << std::endl;

    return 0;
}
