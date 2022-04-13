#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

// En este archivo se va a calcular la hipotenusa de a y b

int calcularHipotenusa(int num1, int num2) {
    int resultado;
    resultado = pow(num1,2) + pow(num2,2);
    return resultado;
}
