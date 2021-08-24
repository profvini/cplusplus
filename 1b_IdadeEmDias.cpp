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
     Faça um programa que receba a idade de uma pessoa expressa em anos,
     meses e dias e mostre esta idade expressa apenas em dias (cálculo
     aproximado
     Se a pessoa nasceu em 24/08/2000 o input vai ser: 21 0 0
     Se a pessoa nasceu em 20/7/2000 o input vai ser: 21 1 4
     */
    
    int anos=0, meses=0, dias=0;
    int totDias = 0;
    
    
    cout << "Informe sua idade em anos, meses e dias: ";
    cin >> anos >> meses >> dias;
    
    totDias = anos * 365 + meses * 30 + dias;
    
    cout << "Total aproximado de dias vividos: " << totDias << endl;
    
    return 0;
}
