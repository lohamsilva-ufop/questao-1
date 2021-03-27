//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182
#include <iostream> //biblioteca padrão de entrada e saída
#include <vector> //utilização da classe vector para a implementação de lista linear

using namespace std;

int main(){ //função principal

    int i; //declaração de variável de iteração
	int j; //declaração de variável de iteração
	int troca; //declaração de realizará o swap

	vector <int> vetor { 45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64 }; //declaração do vetor utilizando a classe vector e inicialização de seus elementos

//laço para imprimir na tela o vetor desordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;

//laço de repetição para realizar as trocas:
	for (i = 1; i < vetor.size(); i++) { //for principal para testar uma posiçao fixa
		for (j = 0; j < vetor.size()-1; j++) { //for interno para testar item a item.
			if (vetor[j] > vetor[j+1]) { //se caso a posição atual for maior que a posição posterior
				troca = vetor[j]; //a variável temporária recebe o elemento da posição atual que será trocado
				vetor[j] = vetor[j+1]; //a posição atual recebe o elemento da posição posterior
				vetor[j+1] = troca; //a posição posterior recebe o elemento da posição anterior
			}
		}
	} //repete-se até o ultimo item até organizar o vetor


//laço para imprimir na tela o vetor ordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;
system ("pause");
}
