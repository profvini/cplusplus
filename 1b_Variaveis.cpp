#include <iostream> //entrada e saida de dados
using namespace std; // habilitei o uso dos comandos Standard (STD)

/* Comentario em bloco
Sao uteis para eu descrever situações mais complexas, ou mais extensas...
- Enunciados
- Definições do programa
- Regras de negocio
*/

int main() // Ponto de Partida. Função principal
{ 
  //Variaveis sao usadas para guardar as informações
  string nome; // String significa que é uma variavel que armazena textos, palavras, etc
  int idade; // int permite guardar um numero inteiro 
  float altura = 0; // ponto flutuante permite guardar numeros decimais
  double valor; // valores, numeros, reais, etc
  double peso;
  double imc = 0;
  char sexo;

  cout << "Qual o seu nome?\n";
  cin >> nome;

  cout << "Qual seu sexo? (M/F) ";
  cin >> sexo;

  cout << "Qual a sua idade, " << nome << "?" << endl;
  cin >> idade;

  cout << "Qual a sua altura, " << nome << "?" << endl;
  cin >> altura;

  cout << "Qual o seu peso, " << nome << "?" << endl;
  cin >> peso;

  imc = peso/(altura*altura);


  cout << endl;
  cout << nome << " tem " << idade << " e mede  " << altura << endl;
  cout << "O IMC de " << nome << " eh: " << imc;
  
  return 0;
}
