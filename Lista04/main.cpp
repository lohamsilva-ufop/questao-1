#include <iostream> //biblioteca padr�o de entrada e sa�da
#include <string>


//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//N�mero 4: BruteForceStringMatch
//Premissa: dado um texto T, encontre uma palavra P nesse texto (correspond�ncia)

using namespace std;

int main(){
    string T; //declara��o da string de texto
    string P; //declara��o da string da palavra de correspond�ncia
    int i; //declara��o da vari�vel de itera��o
    int j; //declara��o da vari�vel de itera��o
    int m; //declara��o da vari�vel que pegar� o tamanho da string de palavra.
    int n; //declara��o da vari�vel que pegar� o tamanho da string de texto.

    cout << "Entre com o texto:" << endl; //pega o texto com o usu�rio
    getline(cin, T);  //guarda o texto na string

    fflush(stdin); //remove o buffer do teclado
    cout << "Entre com o texto a ser encontrado:" << endl; //pega o texto com o usu�rio
    getline(cin, P); //guarda o texto na string

    n = T.size(); //pega o tamanho da string de texto
    m = P.size(); //pega o tamanho da string de palavra


    for (i=0; i <n-m; i++){ //la�o de repeti��o que vai de 0 at� a diferen�a entre tamanho de texto com a palavra. Simboliza o numero m�ximo de compara��es realizadas
        j=0; //inicializa j a cada compara�ao

        while ((j < m) && (P[j] == T [i + j ])){ //enquanto j for menor que m e houver uma correspond�ncia sequencial com a proxima posi��o:
            j = j + 1; //j incrementa
        }

       if (j == m){ //se encontrou a correspondencia
           return i; //retorna o indice
       }

    }

    return -1; //se nao encontrou a correspondencia retorna -1
}

