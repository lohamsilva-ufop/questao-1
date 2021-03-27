#include <iostream>
#include <algorithm>

int main() {
	int i;
	int j;
	int troca = 0;
	int vetor[] = { 45, 70, 14, 56, 23, 1, 45, 2, 34, 7, 90, 64 };

	for (i = 0; i < vetor.lenght(); i++) {
		for (j = 1; j < vetor.lenght()-1; j++) {
			if (vetor[i] > vetor[i + 1]) {
				troca = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = troca;
			}
		}
	}

	for (i = 0; i < vetor.lenght(); i++) {
		cout << vetor[i] endl;
	}
	getch();

}
