#include <iostream>
#include <vector>
//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 6: Casco convexo

/*Premissa: Dado um conjunto com X pontos, forme um polígono convexo que inclui todos os outros pontos em seu interior:
Com base no vídeo: https://www.youtube.com/watch?v=1vX_aco2DJs
Temos o pseudocódigo:

QuickHull (S)
    S1 = [];
    S2 = [];
    a = ponto mais esquerda
    b = ponto mais a direita

    para todo ponto P depois de a e antes de b
        se p estiver a direita de ab, adicione P à S1
        senao, adicione a S2

    retorne (a)+Hullset(S1,a,b) + Hullset(S2,b,a)+b

Hullset (S, p, q)
    Se S = O retorne void
    Senao
    c = ponto mais distante de pq
    A = conjunto de pontos a direita de (p,c)
    B = conjunto de pontos a direita de (c,q)

    retorne Hullset (A,p,c) + c + Hullset(B,c,q)
*/

using namespace std;

int main()
{

    pair <int,int> ponto;
    vector <vector<int>> S;

    //preenchendo o vetor de pontos, com seus eixos X e Y:
    for(int i=0; i<20; i++){
        ponto.first = rand()%(i) + 1;
        ponto.second = rand()%(i) + 1;
        S.push_back(ponto.first);
        S.push_back(ponto.second);
    }

    cout << "Hello world!" << endl;
    return 0;
}
