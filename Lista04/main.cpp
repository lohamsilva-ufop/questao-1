#include <iostream> //biblioteca padrão de entrada e saída
#include <string>


//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 4: BruteForceStringMatch
//Premissa: dado um texto T, encontre uma palavra P nesse texto (correspondência)

using namespace std;

int main(){
    string T; //declaração da string de texto
    string P; //declaração da string da palavra de correspondência
    int i; //declaração da variável de iteração
    int j; //declaração da variável de iteração
    int m; //declaração da variável que pegará o tamanho da string de palavra.
    int n; //declaração da variável que pegará o tamanho da string de texto.

    cout << "Entre com o texto:" << endl; //pega o texto com o usuário
    getline(cin, T);  //guarda o texto na string

    fflush(stdin); //remove o buffer do teclado
    cout << "Entre com o texto a ser encontrado:" << endl; //pega o texto com o usuário
    getline(cin, P); //guarda o texto na string

    n = T.size(); //pega o tamanho da string de texto
    m = P.size(); //pega o tamanho da string de palavra


    for (i=0; i <n-m; i++){ //laço de repetição que vai de 0 até a diferença entre tamanho de texto com a palavra. Simboliza o numero máximo de comparações realizadas
        j=0; //inicializa j a cada comparaçao

        while ((j < m) && (P[j] == T [i + j ])){ //enquanto j for menor que m e houver uma correspondência sequencial com a proxima posição:
            j = j + 1; //j incrementa
        }

       if (j == m){ //se encontrou a correspondencia
           return i; //retorna o indice
       }

    }

    return -1; //se nao encontrou a correspondencia retorna -1
}

