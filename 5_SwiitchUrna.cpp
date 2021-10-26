#include <iostream>
using namespace std;
int main() {
  
  char escolha = ' ';
  int voto = 0;
  int c1 = 0, c2 = 0, c3 = 0; //votos dos candidatos
  int b = 0, n = 0; //brancos nulos 
  while (escolha != 'T')
  {
    cout << "(V) Votar \n";
    cout << "(T) Terminar\n";
    cin >> escolha;

    switch(escolha)
    {
      case 'V':
      case 'v':
        // solicitar o voto
        cout << "Informe seu voto: \n";
        cout << " 1. Candidato 1\n";
        cout << " 2. Candidato 2\n";
        cout << " 3. Candidato 3\n";
        cout << " 0. Branco\n";
        cout << "-1. Nulo\n";
        cin >> voto;

        // Salvar o voto
        switch(voto)
        {
          case 1:
            cout << "Você votou no Candidato 1. \n";
            c1++;
          break;
          case 2:
            cout << "Você votou no Candidato 2. \n";
            c2 = c2 + 1;
          break;
          case 3:
            cout << "Você votou no Candidato 3. \n";
            c3 += 1;
          break;
          case 0:
            cout << "Voto em branco. \n";
            b++;
          break;
          case -1:
            cout << "Voto Nulo. \n";
            n++;
          break;
          default:
            cout << "Voto invalido. Tente novamente. \n";
        }
      break;

      case 'T':
      case 't':
        cout << "Resultados:\n\n";
        cout << "Candidato 1: " << c1 << endl;
        cout << "Candidato 2: " << c2 << endl;
        cout << "Candidato 3: " << c3 << endl;
        cout << "Votos Brancos: " << b << endl;
        cout << "Votos Nulos: " << n << endl;


      // Mostrar quem foi o vencedor
      cout << "Vencedor: CANDIDATO ";
      if(c1 > c2 && c1 >c3) // C1 ganhou
        cout << "1\n";
      else if(c2 > c1 && c2 > c3)//C2 ganhou
        cout << "2\n";
      else if (c3 > c1 && c3>c2)// C3 ganhou
        cout << "3\n";

      break;

      default:
        cout << "Escolha Invalida\n";
    } //switch principal
  } //while
  
  return 0;
} // main
