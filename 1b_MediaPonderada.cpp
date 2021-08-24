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
    
    /*
     Implemente um programa que calcule a média ponderada de 3 provas (P1, P2, P3),
     fornecidas pelo usuário, imprima na tela o resultado.
     Os pesos das provas também devem ser informados
     */
    
    float p1=0, p2=0, p3=0;
    float peso1=0, peso2=0, peso3=0;
    float mediaPonderada=0;
    
    cout << "Informe a nota das 3 provas: " << endl;
    cin >> p1;
    cin >> p2;
    cin >> p3;
    
    cout << "Informe o peso de cada prova: " << endl;
    cin >> peso1 >> peso2 >> peso3;
    
    mediaPonderada = (p1*peso1 + p2*peso2 + p3*peso3)/ (peso1+peso2+peso3);
    
    cout << "A media ponderada eh: " << mediaPonderada << endl;
}
