#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

/*  Carlos Centeno
    Ingenieria en sistemas de la informacion
    Universidad Centroamericana (UCA)
    Programacion en C (Practica de apuntadores y referencias)
    Calcular la hipotenusa*/ 
int calcularHipotenusa(int num1, int num2);
    int main()
    {
        int a,b;
        float hipotenusa;
        cout << "\t\t Calcular la hipotenusa\n\n";
        cout <<"Ingrese el valor del cateto(a) y el cateto(b), la hipotenusa es igual a c\n\n";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;

        hipotenusa=calcularHipotenusa(a, b);

        cout << "\n\nLa hipotenusa de los catetos ingresados es: " << hipotenusa;
        




        return 0;
    }
    