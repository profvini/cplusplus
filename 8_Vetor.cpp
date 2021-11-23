#include <iostream>
using namespace std;


void Exercicio1() {
	int number[5]; // vetor para armazenar 5 numeros
	int maiorValorIndex = 0; //posição do maior valor no vetor
	float soma = 0;
	float media = 0;

	for (int i = 0; i < 5; i++ ) 
  {
		number[i] = (rand() % 10) + 1;
		soma += number[i]; //acumula os valores para fazer a media

		if (i == 0) {
			maiorValorIndex = 0;
		}
		else if (number[i] > number[maiorValorIndex]) {
			maiorValorIndex = i;
		}
    cout << endl << number[i];
	}


	cout << endl << endl << "Maior numero e: " << number[maiorValorIndex] << " com o indice de: " << maiorValorIndex;

	media = soma / 5;
	cout << endl <<"media e: " << media;
}


void Exercicio2()
{
  int numeros[5];
  for(int i=0 ; i< 5; i++)
  {
    cout << "Informe um valor: ";
    cin >> numeros[i];
  }

  for(int i = 0; i<5; i++)
  {
    cout << numeros[i] << " * " << i << " = " << numeros[i] * i << endl;
  }
}

int main() {

  srand(time(0)); //seed do rand para aleatoriedade
  string nome[4]; //Variavel vetor para guardar 4 strings diferentes

  //Vetor de tamanho 4 é acessado por indices de 0 até 3. Indices do vetor vão de 0 até tamanho -1;
  nome[0] = "Gabriela";
  nome[1] = "Diego";
  nome[2] = "Ana";
  nome[3] = "Vini";

  cout << nome[0] << endl;
  cout << nome[1] << endl;
  cout << nome[2] << endl;
  cout << nome[3] << endl;

  int numeros[5];
  for (int i=0; i<5; i++)
  {
    numeros[i] = rand()%10;
    //cin >> numeros[i];
  }

  for (int i=0; i<5; i++)
  {
    cout << numeros[i] << endl;
  }
  cout << "O valor do centro eh: " << numeros[2] << endl;

  //UMA STRING EH UM VETOR DE CHAR
  string palavra = "Banana";
  cout << "A palavra tem " << palavra.size() << " letras" <<endl;
  for(int i=0; i < palavra.size(); i++)
  {
    cout << palavra[i] << endl; //acessando cada caracter
  }
  
  cout << "\nExercicio 1";
  Exercicio1();

  cout << "\n\nExercicio 2 \n";
  Exercicio2();
} 
