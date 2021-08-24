//
//  main.cpp
//  Algoritmos
//
//  Created by Vini on 24/08/21.
//

#include <iostream>
using namespace std;

int main() {
    // Exercicio 1: Sobre definições de variáveis
    //Tipos de Dados: string para texto, char para caracteres, int para numeros inteiros e double/float para numeros decimais!
    
     //a. um nome
    string nome = "Vini";
    
    //b. uma idade
    int idade = 18;
    
    //c. o cpf do usuário
    int cpf; //apenas numeros
    string cpfFormatado; // cpf formatado
    
    //d. uma data de nascimento
    string dataNascimento;
    
    //e. número de vidas de um personagem
    int numVidas=3;
    
    //f. quantidadade de "saúde” ou “dano” (de um personagem em um jogo)
    float saude;
    
    //g. se o personagem está vivo ou morto
    bool taVivo = true;
    
    //h. se o personagem está usando ou não um power-up
    bool powerUp;
    powerUp = true;
    
    //i. capacidade, em litros, de um tanque
    int capacidadeTanque;
    float qtdAtualdeCombustivel;
    
    //j. velocidade de um carro
    float velocidade;
    
    //k. se um carro é hatch ou sedan
    char tipoCarro;
    tipoCarro = 'H'; // para carros hatch
    tipoCarro = 'S'; // para carros sedan
    
    //l. se um animal é carnívoro, herbívoro ou onívoro
    char tipoAnimal;
    tipoAnimal = 'C';
    
    //m. número de power ups que o jogador já pegou no jogo
    int numPowerUps=0;
    
    // n. porcentagem de força que o personagem tem
    float perForca;
    
    //o. preço de um item
    double preco;
    
    //p. número de itens em uma loja
    int numItens;
    
    //q. se um item está bloqueado ou não
    bool estaBloqueado;
    
    //r. uma senha alfa-numérica
    string senha;
    
    return 0;
}
