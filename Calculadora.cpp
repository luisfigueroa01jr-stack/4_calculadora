#include "Calculadora.h"

int Calculadora::sumar(int a, int b) const {
    return a + b;
}

int Calculadora::sumar(int a, int b, int c) const {
    return a + b + c;
}

double Calculadora::sumar(double a, double b) const {
    return a + b;
}

double Calculadora::sumar(double a, double b, double c) const {
    return a + b + c;
}

double Calculadora::sumar(int a, double b) const {
    return a + b;
}

double Calculadora::sumar(double a, int b) const {
    return a + b;
}
