//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182
#include <iostream> //biblioteca padr�o de entrada e sa�da
#include <vector> //utiliza��o da classe vector para a implementa��o de lista linear

using namespace std;

int main(){ //fun��o principal

    int i; //declara��o de vari�vel de itera��o
	int j; //declara��o de vari�vel de itera��o
	int troca; //declara��o de realizar� o swap

	vector <int> vetor { 45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64 }; //declara��o do vetor utilizando a classe vector e inicializa��o de seus elementos

//la�o para imprimir na tela o vetor desordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;

//la�o de repeti��o para realizar as trocas:
	for (i = 1; i < vetor.size(); i++) { //for principal para testar uma posi�ao fixa
		for (j = 0; j < vetor.size()-1; j++) { //for interno para testar item a item.
			if (vetor[j] > vetor[j+1]) { //se caso a posi��o atual for maior que a posi��o posterior
				troca = vetor[j]; //a vari�vel tempor�ria recebe o elemento da posi��o atual que ser� trocado
				vetor[j] = vetor[j+1]; //a posi��o atual recebe o elemento da posi��o posterior
				vetor[j+1] = troca; //a posi��o posterior recebe o elemento da posi��o anterior
			}
		}
	} //repete-se at� o ultimo item at� organizar o vetor


//la�o para imprimir na tela o vetor ordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;
system ("pause");
}
