#include <iostream>
#include <vector>

using namespace std;

struct no{
    int dado;
    int no_vinculado;
};

void imprimirDados(vector<no> nos){
    for(int i=0; i<nos.size();i++){
                  cout << "No: " << i << " :" <<endl;
                  cout << "dado: " << nos[i].dado << endl;
                  cout << "indice no vinculado: " << nos[i].no_vinculado << endl;
                  cout << endl;
            }
}

void inserirNo(int elemento, int no_vinculado, vector<no> &nos){
no n;
    if(nos.empty()){
        n.dado = elemento;
        n.no_vinculado = 0;
        nos.push_back(n);
        cout << "Raiz inserida com sucesso!" << endl;
    } else{
        n.dado = elemento;
        n.no_vinculado = no_vinculado;
        nos.push_back(n);
        cout << "No inserido com sucesso!" << endl;
    }
}


int buscaEmProfundidade(int elemento, int i, vector<no> nos){
    if (nos[i].dado == elemento){
        return i;
    } else{
        buscaEmProfundidade(elemento, i+1, nos);
    }
}

int main() {
    int opcao = -1;
    int vinculado;
    int elemento;
    vector <no> nos;

    while(opcao != 0){
        cout << "1 - Inserir item " << endl;
        cout << "2 - Buscar item " << endl;
        cout << "3 - Imprimir dados" << endl;
        cout << "0 - Sair " << endl;
        cin >> opcao;

        if(opcao == 1){
            cout << "Insira o elemento:" << endl;
            cin >> elemento;

            cout << "Insira o indice do no vinculado:" << endl;
            cin >> vinculado;

            inserirNo(elemento,vinculado,nos);

        } else if (opcao == 2){
            cout << "Insira o elemento que deseja buscar:" << endl;
            cin >> elemento;

            cout << "o item esta no no " << buscaEmProfundidade(elemento, 0, nos);

        } else{
            imprimirDados(nos);
        }
    }



	return 0;
}
