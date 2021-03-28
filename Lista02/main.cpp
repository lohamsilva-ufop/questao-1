#include <iostream> //biblioteca padr�o de entrada e sa�da
#include <vector> //utiliza��o da classe vector para a implementa��o de lista linear

//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//N�mero 2: Selection Sort
//Premissa: encontre o menor elemento do vetor e troque com o elemento da 1� posi��o - encontre o 2� elemento e troce pela 2� posi��o

using namespace std;

int main() {//fun��o principal
    int i; //declara��o de vari�vel de itera��o
	int j; //declara��o de vari�vel de itera��o
	int troca; //declara��o de realizar� o swap
	int menor; //declara��o da vari�vel que guardar� o menor elemento

	vector <int> vetor { 45, 70, 14, 56, 23, 1, 46, 2, 34, 7, 90, 64 }; //declara��o do vetor utilizando a classe vector e inicializa��o de seus elementos

//la�o para imprimir na tela o vetor desordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;

//la�o de repeti��o para realizar as trocas e verifica�e�es

for (i = 0; i < vetor.size()-1; i++) {
		menor = i; //o valores menores do array s�o marcadas na posi��o i menor fixada

		for (j = i+1; j < vetor.size(); j++) { //varre o vetor desconsiderando o valor menor ja alterado
            if (vetor[j] < vetor[menor]){ //se o valor atual � menor que o valor fixado
                menor = j; //o menor recebe j para fazer a troca
            }
        }
        //realiza o swap:
                troca = vetor[menor];
                vetor[menor] = vetor[i];
                vetor[i] = troca;
    }

//la�o para imprimir na tela o vetor ordenado:
cout << "{";
	for (i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << ",";
	}
cout << "}" << endl;
system ("pause");

}
