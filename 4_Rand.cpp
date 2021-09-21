#include <iostream>
using namespace std;


//NUMEROS PSEUDO-ALEATÓRIOS
int main() {
    
    int sorteado;
    int sorteado2;
    int sorteado3;
    int sorteado4;
    int sorteado5;
    
    // Seed para o Rand: semente para a sequencia de valores a serem gerados
    //int semente = 87;
    int semente = time(0); // sempre uma seed diferente a cada execução
    
    //cout << "Seed: " << semente << endl;
    srand(semente);

   
    // Sortear um valor entre 0 e o maior numero inteiro (RAND_MAX)
    //cout << RAND_MAX << endl;
    sorteado = rand();
    cout << sorteado << endl;
    
    
    //Definir o valor maximo sorteado
    sorteado2 = rand() % 3; //-> 0, 1, 2
    cout << sorteado2 << endl;
    
    sorteado3 = (rand()% 3) + 1; // 1, 2 ou 3
    cout << sorteado3 << endl;
    
    //Sortear entre 5 e 8
    sorteado4 = (rand()%4) + 5;
    cout << sorteado4 << endl;
    
    //Sortear entre -10 e 10
    sorteado5 = (rand()%20) - 10;
    cout << sorteado5 << endl;
    
    return 0;
    
    
    
} //final do main
