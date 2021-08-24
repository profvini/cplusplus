//
//  main.cpp
//  Algoritmos
//
//  Created by Vini on 24/08/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
   /* ○ Faça um programa que resolva um polinômio de segundo grau:
    
    Para isso, o programa pedirá para o usuário digitar os valores
    de a, b, c e x
    O programa deverá imprimir na tela o resultado*/
    
    float a=0, b=0, c=0, x=0, y=0;
    
    cout << "Informe os valores para calculo do polinimio de segundo grau:\n";
    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;
    cout << "Valor de c: ";
    cin >> c;
    cout << "Valor de x: ";
    cin >> x;
    
    //y = a * (x*x) + (b * x) + c;
    y = a * (pow(x,2)) + (b * x) + c;
    
    cout << "O valor de Y eh: " << y << endl;
    
    return 0;
}
