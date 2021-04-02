#include <iostream>
#include <vector>
//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 7: Caixeiro Viajante

/*Premissa: Dado um grafo com n cidades (vértices) e n caminhos (arestas) verifique:
1 - Escolher o vizinho mais próximo (saindo de um nó e indo para outro com aresta de custo menor
2 - O nó não pode ser visitado novamente (manter uma lista de nós que ja foram visitados)
3 - Ao termino do algoritmo, volto ao nó inicial
*/

using namespace std;


vector<vector<int>> criaMatrizDistancia(vector<vector<int>> &v){ //gerar todas as alternativas de rotas - todas as permutações de cidades

    int quantidade;
    int distancia;

    cout << "Digite a quantidade de cidades:";
    cin >> quantidade;

    for (int i=0; i<quantidade; i++){
            vector<int> v1;

        for (int j=0; j<quantidade; j++){
                if(i==j){
                    v1.push_back(0);
                } else{
                    cout << "Digite a distancia da cidade " << i+1 << " para a cidade" << j+1 << ":";
                    cin >> distancia;
                    v1.push_back(distancia);
                }
        }

        v.push_back(v1);
    }
    return v;
}

void imprimeMatrizDistancia(vector<vector<int>> vec){
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}

vector<vector<int>> permuta(vector<vector<int>> &v){




}

vector<vector<int>> geraRota(vector<vector<int>> &v){

vector<vector<int>> v2;

    if (v.size() == 1){
        return v;
    } else{
        for (int i = 1; i < v.size()-1; i++) {
            for (int j=i+1; j<v[i].size()-1; j++){
                // v2.push_back(v[i][j+1]);
               // cout << vec[i][j] << " ";
               // cout << endl;
            }
        }
    }

    imprimeMatrizDistancia(v2);
    return v2;

}






void calculaRota(vector<vector<int>> &vec){ //para cada rota calcule o custo
    int custo = 0;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++){
            custo = custo + vec[i][j];
        }
        cout << custo << endl;
        custo = 0;
    }
}

void EscolheRota(){ //escolhe rota de menor custo

}


int main(){

    int quantidade = 4;

    vector<vector<int>> vetor;









    criaMatrizDistancia(vetor);
    imprimeMatrizDistancia(vetor);
    //gera as rotas possiveis
    //seleciona a rota de menor custo
    //imprime o resultado
    //calculaRota(vetor);



    /*for(int i=0; i<2;  i++){
            for(int j=0; j<2;  j++){
                cout << vetor[i][j];
        }

    }*/



    return 0;
}
