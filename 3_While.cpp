#include <iostream>
using namespace std;

// Laços de Repetição
int main() {
    
    // Ler numeros inteiros enquanto o valor for menor que 10 e após: dizer quantos valores informados sao positivos e quantos sao negativos
    
    int numero = 0;
    int contaPositivos = 0;
    int contaNegativos = 0;
    
    
    //WHILE: Enquanto uma condição for VERDADEIRA, repita
    //while(<condição>)
   /* while(numero < 10)
    {
        cout <<  "Informe um numero: ";
        cin >> numero;
        
        if(numero < 0)
        {
            contaNegativos++; // contaNegativos = contaNegativos + 1 OU contaNegativos += 1;
        }
        else if (numero > 0 && numero < 10)
        {
            contaPositivos++;
        }
        
    }
    cout << "Quantidade de valores positivos: " << contaPositivos << endl;
    cout << "Quantidade de valores negativos: " << contaNegativos << endl;
    
    */
    
    //Ler 5 numeros inteiros e após: dizer quantos valores informados sao positivos e quantos sao negativos
    int contador = 0;// vai contar as repetições

    while (contador < 5)// 0, 1, 2, 3, 4
    {
        cout <<  "Informe um numero: ";
        cin >> numero;

        if(numero < 0)
        {
            contaNegativos++;
        }
        else if (numero > 0 )
        {
            contaPositivos++;
        }
        
        contador++;
    }
    
    cout << "Quantidade de valores positivos: " << contaPositivos << endl;
    cout << "Quantidade de valores negativos: " << contaNegativos << endl;
    
    return 0;
} //final do main
