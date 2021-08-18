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

  cout << "Qual o seu nome?\n";
  cin >> nome;
  cout << "Hello World, " << nome << "!"; // cout é o comando de saida para a tela 
  cout << endl; // Quebra de linha
  cout << "Outra mensagem!" << endl;
  
  return 0;
}
