#include <iostream>
#include <vector>

/*escolha os itens de um conjunto S, segundo o limite de capacidade de peso (w) ou tamanho da mochila
critérios da escolha do conjunto
cada item possui um peso w e um valor c
Formulação:

o somatório de peso dos itens deve ser <= peso da mochila
Assume valores binários: um objeto estará na mochila? SIM 1 ou NAO 0?

Exemplo:

Minha mochila possui 15kg. Tenho 4 itens que são:
ITEM     VALOR      PESO
A:         8          5
B:         11         7
C:         6          4
D:         4          3


Quem escolher?
Max = 8x + 11x + 6x + 4x
S.a
5x + 7x + 4x + 3x <= 15
onde x E {0,1}

Com busca exaustiva e força bruta
compara todas as possibilidades de preenchimento da mochila que
não violem a restrição de capacidade e retorna a melhor solução


É NP-Dificil (exponencial)

Regra: pega-se o valor de utilidade desse objeto
VU = c/w

Algoritmo:
Enquanto existir objeto que caiba na mochila, escolha aquele com maior utilidade

Depois de encontrado, escolha aquele que ajuda no problema */

using namespace std;

int verificaMochila(int n, int W, vector<int> wi, vector<int> ci) {

  if (wi[n - 1] > W){
        return verificaMochila(n-1, W, wi, ci);
  } else {
    int insere = ci[n - 1] + verificaMochila(n - 1, W - wi[n - 1], wi, ci);
    int retira = verificaMochila(n - 1, W, wi, ci);

    return max(insere, retira);
  }
}



void mostraSubconjunto(vector <vector<int>> sub){
    cout << "Os itens que podem ser colocados na mochila que possuem o valor/peso adequado e: ";
    for(int i=0; i<sub.size(); i++){
            for(int j=0; j<sub[i].size(); j++){
                cout << sub[i][j] <<  endl;
        }
    }
    //cout << "}";
}

int main(){
    int W;
    int n;
    int pitem;
    int citem;
    int i;
    int j;
    vector <int> w;
    vector <int> c;


    cout << "Entre com o peso da mochila: ";
    cin >> W;

    cout << "Entre com numero de itens: ";
    cin >> n;

    for(i=0; i<n; i++){
            cout << "Qual e o peso do item " << i+1 << "?:";
            cin >> pitem;
            w.push_back(pitem);

            cout << "Qual e o valor do item " << i+1 << "?:";
            cin >> citem;
            c.push_back(citem);
    }


   int valor = verificaMochila(n, W, w, c);
   cout << "Valor total dos itens que podem estar na mochila: " << valor;


    return 0;
}
