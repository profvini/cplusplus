//
//  main.cpp
//  Algoritmos
//
//  Created by Vini on 24/08/21.
//

#include <iostream>
using namespace std;

int main() {
   // O Operador % retorna o resto da divisao de dois valores
    
    int v1;
    int v2;
    
    cout << "Informe dois valores: ";
    cin >> v1;
    cin >> v2;
    
    
    float resto = v1%v2;
    
    cout <<"O resto da divisao de " << v1 << " por " << v2 << " eh " <<  resto << endl;
    
    return 0;
}
