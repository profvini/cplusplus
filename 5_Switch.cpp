#include <iostream>
using namespace std;
int main() {
  int escolha=0;
  int v1, v2;
  int resposta;

  while(escolha != 5)
  {
    cout << "MENU DE OPÇÕES \n\n";
    cout << "1. Somar dois numeros\n";
    cout << "2. Subtrair dois numeros\n";
    cout << "3. Multiplicar dois numeros\n";
    cout << "4. Dividir dois numeros\n";
    cout << "5. SAIR\n";
    cout <<"\nInforme sua escolha: ";
    cin >> escolha;

    switch(escolha)
    {
      case 1:
        cout << "Infome o primeiro valor da soma: ";
        cin >> v1;
        cout << "Informe o segundo Valor da soma: ";
        cin >> v2;
        resposta = v1+v2;
        cout << "Adição: " << resposta << endl;
      break;
      case 2:
        cout << "Infome o primeiro valor da subtração: ";
        cin >> v1;
        cout << "Informe o segundo Valor da subtração: ";
        cin >> v2;
        resposta = v1-2;
        cout << "Subtração: " << resposta << endl;
      break;
      case 3:
        cout << "Infome o primeiro valor da multi: ";
        cin >> v1;
        cout << "Informe o segundo Valor da multi: ";
        cin >> v2;
        resposta = v1*v2;
        cout << "Multiplicação: " << resposta << endl;
      break;
      case 4:
        cout << "Infome o primeiro valor da divisao: ";
        cin >> v1;
        cout << "Informe o segundo Valor da divisao: ";
        cin >> v2;
        resposta = v1/v2;
        cout << "Divisão: " << resposta << endl;
      break;
      case 5:
        cout << "Sistema Finalizado: \n";
      break;
      default:
        cout << "Opção Invalida! \n";
    } //switch
  } // while

  return 0;
} // main
