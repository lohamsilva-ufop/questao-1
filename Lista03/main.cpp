#include <iostream> //biblioteca padrão de entrada e saída
#include <vector> //utilização da classe vector para a implementação de lista linear

//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 3: Busca Sequencial
//Premissa: data uma chave K, procure por essa chave e uma lista N de forma sequencial


using namespace std;

int main(){
    int i = 0; //declaração de variável de iteração
    int k; //declaração da variável chave
    vector <int> A {45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64}; //declaração do vetor utilizando a classe vector e inicialização de seus elementos

    cout << "Informe a chave:" << endl; //pega a chave com o usuário
    cin >> k; //armazena a chave na variável k

    while (A[i] != k){ //enquanto o elemento da posição i do vetor for diferente da chave:
        i = i+1; //incremente a variavel de iteração
    }

    if(i < A.size()){ //se a iteração é menor que o tamanho do vetor
        return i; //significa que ele encontrou o elemento e retorna a posição que ele está
    } else {
       return -1; //se ele é igual o tamanho do vetor, ele pesquisou e não encontrou. Neste caso, retorna -1
    }
    cout << endl;
    system("pause");
    return 0;
}
