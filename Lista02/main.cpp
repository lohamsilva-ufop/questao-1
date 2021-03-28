#include <iostream> //biblioteca padrão de entrada e saída
#include <vector> //utilização da classe vector para a implementação de lista linear

//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 2: Selection Sort
//Premissa: encontre o menor elemento do vetor e troque com o elemento da 1ª posição - encontre o 2° elemento e troce pela 2ª posição

using namespace std;

int main() {//função principal
    int i; //declaração de variável de iteração
	int j; //declaração de variável de iteração
	int troca; //declaração de realizará o swap
	int menor; //declaração da variável que guardará o menor elemento

	vector <int> vetor { 45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64 }; //declaração do vetor utilizando a classe vector e inicialização de seus elementos

//laço para imprimir na tela o vetor desordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;

//laço de repetição para realizar as trocas e verificaçeões

for (i = 0; i < vetor.size()-1; i++) {
		menor = i; //o valores menores do array são marcadas na posição i menor fixada

		for (j = i+1; j < vetor.size(); j++) { //varre o vetor desconsiderando o valor menor ja alterado
            if (vetor[j] < vetor[menor]){ //se o valor atual é menor que o valor fixado
                menor = j; //o menor recebe j para fazer a troca
            }
        }
        //realiza o swap:
                troca = vetor[menor];
                vetor[menor] = vetor[i];
                vetor[i] = troca;
    }

//laço para imprimir na tela o vetor ordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;
system ("pause");

}
