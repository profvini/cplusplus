#include <iostream>
using namespace std;


int main() {
    
    char escolhaPI, vencedor;
    int palpiteJogador, palpiteMaquina;
    int resultado;
    
    // 0. Iniciar a seed
    srand(time(0));
    
    // 1. Perguntar se o jogador quer ser Par ou Impar (o computador será a outra opcao)
    cout << "Escolha: PAR (P) ou IMPAR (I)\n";
    cin >> escolhaPI;
    
    // 2. Solicitar o palpite do jogador (entre 0 e 5)
    cout << "Informe seu palpite (entre 0 e 5): ";
    cin >> palpiteJogador;
    
    // 3. Gerar o palpite do computador (entre 0 e 5)
    palpiteMaquina = rand()%6;
    
    // 4. Calcular o resultado (somar os dois palpites e verificar se é par ou impar)
    resultado = palpiteJogador + palpiteMaquina;
    
    // 5. Identificar o vencedor e mostrar o resultado
    cout << "JOGADOR: " << palpiteJogador << endl;
    cout << "MAQUINA: " << palpiteMaquina << endl;
    
    if(resultado%2 == 0)
    {
        cout << "Resultado PAR\n";
        vencedor = 'P';
    }
    else
    {
        cout << "Resultado IMPAR\n";
        vencedor = 'I';
    }
    
    if(escolhaPI == vencedor)
        cout << "Jogador Venceu!!!\n";
    else
        cout << "Maquina Venceu\n";
    
    return 0;
}
