#include <iostream>
using namespace std;

int main() {

  srand(time(0));

  int sorteado;
  int sorteado2;
  int sorteado3;
  int sorteado4;


  sorteado = rand() % 3; //Posssiveis restos 0, 1, 2
  sorteado2 = rand() % 5; // Possiveis restos 0, 1, 2, 3, 4
  sorteado3 = rand() % 9; // 0, 1, 2, 3, 4, 5, 6, 7, 8
  sorteado4 = (rand() % 3) + 1; 

  cout << sorteado << endl;
  cout << sorteado2 << endl;
  cout << sorteado3 << endl;
  cout << sorteado4 << endl;
   
//1804289383
//1804289383

//1804289383 e 846930886
//1804289383 e 846930886

//369560737 e 673571308 --> Seed 94
//1205554746 e 483147985 -> Seed 3
}
