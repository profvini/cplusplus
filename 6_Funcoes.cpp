#include <iostream>
using namespace std;

//Definir a interface pra função / protótipo / cabeçalho / especificação
int potencia (int b, int e);
int soma (int a, int b);
int somaOp (int valor1, int valor2 = 1);


void welcome(string nome)
{
  cout << "Olá " << nome << endl;
}

int main() {
  int v1 = 0;
  int v2 = 0;
  int s = 0;
  string usuario;

  cout << "Ola usuario, qual o seu nome? ";
  cin >> usuario;
  welcome(usuario);

  cout <<  "Informe 2 valores: ";
  cin >> v1 >> v2;

  s = soma(v1, v2);

  cout << "Resultado Soma: " << s << endl;
  cout << "Resultado Potencia: " << potencia(v1, v2) << endl;
  cout << "Soma Op (v1 +  v2): " << somaOp(v1, v2) << endl;
  cout << "Soma Op (v1): " << somaOp(v1) << endl;

  return 0;
} 

// IMPLEMENTAÇÕES DAS FUNÇÕES
int potencia (int b, int e)
{
  int resultado;
  int contador = 1;

  resultado = b;
  while(contador < e)
  {
    resultado = resultado * b; // resultado *= base;
    contador++;
  }
  return resultado;
}

int soma (int a, int b)
{
  return a+b;
}

int somaOp (int valor1, int valor2)
{
  return valor1 + valor2;
}
