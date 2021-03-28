#include <iostream> //biblioteca padr�o de entrada e sa�da
#include <vector> //utiliza��o da classe vector para a implementa��o de lista linear

//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//N�mero 3: Busca Sequencial
//Premissa: data uma chave K, procure por essa chave e uma lista N de forma sequencial


using namespace std;

int main(){
    int i = 0; //declara��o de vari�vel de itera��o
    int k; //declara��o da vari�vel chave
    vector <int> A {45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64}; //declara��o do vetor utilizando a classe vector e inicializa��o de seus elementos

    cout << "Informe a chave:" << endl; //pega a chave com o usu�rio
    cin >> k; //armazena a chave na vari�vel k

    while (A[i] != k){ //enquanto o elemento da posi��o i do vetor for diferente da chave:
        i = i+1; //incremente a variavel de itera��o
    }

    if(i < A.size()){ //se a itera��o � menor que o tamanho do vetor
        return i; //significa que ele encontrou o elemento e retorna a posi��o que ele est�
    } else {
       return -1; //se ele � igual o tamanho do vetor, ele pesquisou e n�o encontrou. Neste caso, retorna -1
    }
    cout << endl;
    system("pause");
    return 0;
}
