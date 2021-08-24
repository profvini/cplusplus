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
     Uma loja de artigos de R$1,99 deseja fazer uma promoção para seus clientes
     oferecendo 23% de desconto sobre o valor da nota. Implemente um programa
     que calcule:
     a) o valor a ser pago pelo cliente (você deve solicitar a quantidade de produtos que o cliente deseja adquirir).
     b) o valor de impostos pagos pela loja (sobre o valor da nota), supondo que o percentual a ser aplicado é de 37,5%.
     */
    
    int qtdeItens = 0;
    double valorNota = 0;
    double valorPagar = 0;
    double valorImpostos = 0;
    
    cout << "Informe quantos itens o cliente comprou: ";
    cin >> qtdeItens;
    
    valorNota = qtdeItens * 1.99;
    valorPagar = valorNota * 0.77; //aplicando 23% de desconto
    valorImpostos = valorNota * 0.375;
    
    cout << "Valor Nota: " << valorNota << endl;
    cout << "Valor a pagar com desconto de 23%: " << valorPagar << endl;
    cout << "Valor dos impostos (37.5%): " << valorImpostos << endl;
}
