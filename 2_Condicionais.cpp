#include <iostream>
#include <math.h>
using namespace std;

const float mediaAprova = 6.0;
const int freqAprova = 75;

int main() {
    
    char sexo;
    cout << "Informe seu sexo (M/F): ";
    cin >> sexo;
   
    
    if(sexo == 'M' || sexo == 'm') // SE o valor da variavel for 'M'vai executar a linha seguinte
    {
        cout << "Pessoa do Sexo Masculino\n";
    }
    else // SENAO, eh do sexo feminino
    {
        cout << "Pessoa do Sexo Feminino\n";
    }
    
    
    //Operadores Lógicos
    // E: O aluno eh aprovado se tiver media E frequencia
    // OU: Se animal == gato OU animal == cachorro, posso dizer que o animal tem 4 patas
    // NÃO: Se NÃO estiver chovendo
    
    //Ler a media do aluno e informar se está aprovado ou reprovado
    float media;
    int freq;
    
    cout << "Informe a sua media: ";
    cin >> media;
    cout << "Qual foi sua frequencia? ";
    cin >> freq;
    
    //media = 8; // Estou mudando o valor
    //if(media == 6) // Estou testando se a variavel media tem o valor 6
    
    if(media >= mediaAprova && freq >= freqAprova) //&&: Operador logico E
    {
        cout << "Aluno Aprovado\n";
    }
    else if (media < mediaAprova && freq >= freqAprova) //tem frequencia mas não tem nota
    {
        cout << "Deve fazer a substitutiva\n";
    }
    else
    {
        cout << "Aluno Reprovado\n";
    }
        
   /* media for maior e a freq for maior -> entra no if
    media for maior e a freq for menor -> entra no else
    media for menor e a freq for maior -> entra no else if
    media for menor e a freq for menor -> entra no else
    */
    
    //Uma vetsao mais elaborada
    float notaSubstitutiva;

    if (media >= mediaAprova && freq >= freqAprova)
    {
        cout << "Aluno Aprovado.\n";
    }
    else if (media < mediaAprova && freq > freqAprova)
    {
        cout << "Prova substitutiva.\n";
        cout << "Nota da prova substitutiva";
        cin >> notaSubstitutiva;

        if (notaSubstitutiva > mediaAprova)
        {
            cout << "Aluno Aprovado.\n";
        }
        else
        {
            cout << "Reprovado.";
        }
    }
    else
    {
        cout << "Reprovado.";
    }

    
    bool aprovado;
    
    aprovado = true;
    
    if(aprovado == true)
        cout << "Aluno Aprovado\n";
    else
        cout << "Aluno Reprovado\n";
    

    bool chovendo;
    char resposta;
    
    cout << "Hoje esta chovendo? (S/N): ";
    cin >> resposta;
    
    if(resposta == 'S' || resposta == 's')
        chovendo = true;
    else
        chovendo = false;
    
    if(chovendo) // mesma coisa: if(chovendo == true)
        cout << "Melhor ficar em casa!";
    
    //Operador NÃO
   // if(chovendo == false)
    if(!chovendo) //Quando nao estiver chovendo
        cout << "Vamos passear!\n";
    
    int numero;
    cout << "Informe um numero: ";
    cin >>  numero;
    
    if(numero%2 == 0) // Se o resto da divisao da variavel numero por 2 for zero, o numer eh par.
        cout << "Numero Par\n";
    else
        cout << "Numero Impar\n";
    
    //Priorização: As vezes temos que definir qual a condicao mais interna que sera analisada primeiramente
    string mes;
    bool ferias = false;
    
    if((mes == "Janeiro" || mes == "Fevereiro") && ferias)
        cout << "Eh verão! Vamos sair de ferias!";
    
} //final do main
