#include <iostream>
using namespace std;

void ex1()
{
  //Escreva um programa que lê 10 números e ao final mostre qual o número maior e qual o menor​
  int valorAtual;
  int menorValor = 0;
  int maiorValor = 0;
  for (int n=1; n<=10; n++)
  {
    cout << "Informe o valor " << n << ": ";
    cin >> valorAtual;

    if(n == 1) //se for a primeira rodada, o numero digitado eh maior e menor
    {
      menorValor = valorAtual;
      maiorValor = valorAtual;
    }
    else
    {
      if(valorAtual > maiorValor) // se for maior
      {
        maiorValor = valorAtual;
      }
      else if(valorAtual < menorValor) // se for menor
      {
        menorValor = valorAtual;
      }
    }
  } // for
  cout << "O Menor valor eh : " << menorValor << endl;
  cout << "O Maior valor eh : " << maiorValor << endl;
}

void ex2()
{
  //Escreva um programa que lê 10 números e após cada leitura diga se o número é par ou ímpar​

  int valorAtual;

  for (int n=1; n<=10; n++)
  {
    cout << "Informe o valor " << n << ": ";
    cin >> valorAtual;

    if(valorAtual % 2 == 0) //par
      cout << valorAtual << " eh par!\n";
    else
      cout << valorAtual << " eh impar!\n";
  }
}

void ex3()
{
  //Implemente um programa que calcula a soma dos números pares compreendidos entre dois números lidos.​

  int num1=0, num2=0;
  int soma = 0;

  while (num2 <= num1)
  {
    cout << "Informe dois valores: ";
    cin >> num1 >> num2;
  }
  

  for(int i = num1; i<= num2; i++)
  {
    if(i % 2 == 0) // se i for par, eu somo
    {
      cout << i << endl;
      soma += i; // soma = soma + i;
    }
  }
  cout << "A soma dos valores pares do intervalo eh: " << soma << endl;
}

void ex4()
{
  //Implemente um programa que mostre na tela os números inteiros entre dois números lidos do teclado, organizados em linhas com 10 valores em cada linha:
  int num1=0, num2=0;
  int soma = 0;

  while (num2 <= num1)
  {
    cout << "Informe dois valores: ";
    cin >> num1 >> num2;
  }
  
  int contador = 0;
  for(int i = num1; i<= num2; i++)
  {
    cout << i << " ";
    contador++;

    if (contador == 10)
    {
      cout << endl;
      contador = 0;
    }  
  }

}
int main() {
  

  int op;

  do 
  {
    cout << "Escolha o Exercicio (1 a 4) ou 0 para sair: ";
    cin >> op;

    switch (op)
    {
      case 1:
        ex1();
      break;
      case 2:
        ex2();
      break;
      case 3:
        ex3();
      break;
      case 4: 
        ex4();
      break;
      case 0:
        cout << "Até mais!\n";
      break;
      default:
        cout << "Escolha invalida!\n";
    }
  }while (op !=0);
} 
