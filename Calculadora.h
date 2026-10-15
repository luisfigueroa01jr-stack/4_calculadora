#ifndef CALCULADORA_H
#define CALCULADORA_H

// Sobrecarga de metodos: mismo nombre, distinta firma (cantidad o tipo de parametros)
class Calculadora {
public:
    int sumar(int a, int b) const;              // dos enteros
    int sumar(int a, int b, int c) const;       // tres enteros
    double sumar(double a, double b) const;     // dos decimales
    double sumar(double a, double b, double c) const; // tres decimales

    // Tipos mezclados: sin estas versiones, sumar(5, 3.5) seria ambigua
    // porque (int, int) y (double, double) empatan para el compilador
    double sumar(int a, double b) const;
    double sumar(double a, int b) const;

    // Ojo: sumar(1, 2.5, 3) seria ambigua entre (int, int, int) y (double, double, double);
    // para tres valores conviene pasar todos del mismo tipo
};

#endif
