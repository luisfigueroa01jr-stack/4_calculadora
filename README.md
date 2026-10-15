# Ejercicio 4: Calculadora con sobrecarga de metodos
La clase `Calculadora` tiene varias versiones de `sumar()` con distinta cantidad o tipo de parametros.
El compilador elige la version correcta segun los argumentos de cada llamada.

**Archivos:** `Calculadora.h/.cpp` (versiones `(int,int)`, `(int,int,int)`, `(double,double)`, `(double,double,double)` y mixtas `(int,double)`/`(double,int)`) · `main.cpp` (una llamada por version)

- **Compilar:** `g++ -std=c++17 -Wall *.cpp -o programa.exe`
- **Ejecutar:** `./programa.exe`

```
sumar(5, 3)      = 8
sumar(5, 3, 2)   = 10
sumar(2.5, 3.75) = 6.25
sumar(5, 3.5)    = 8.5
sumar(1.5, 2.25, 3.0) = 6.75
```

**Concepto de POO:** sobrecarga de metodos (polimorfismo estatico) y resolucion de llamadas ambiguas.
