#include <iostream> //biblioteca padrão de entrada e saída
#include <vector>
#include <math.h>

//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 5: BruteForceClosestPair
/*Premissa:
dado um conjunto de n pontos num espaço métrico, encontrar os dois pontos do conjunto que possuem
a menor distância um do outro.
*/
using namespace std;

void mostraPontos(vector <vector<float>> pontos){ // funcao que mostra os pontos de um plano cartesiano

    for (int i = 0; i < pontos.size(); i++) {
            cout << "Ponto" << i+1 << " X / Y: {";
        for (int j = 0; j < pontos[i].size(); j++){
            cout << pontos[i][j] << ",";

        }
        cout << "}" << endl;
    }
}

void inserePontos(vector <vector<float>> &pontos){ //funcao que insere os pontos em um vetor que recebe a posicao X e Y daquele ponto no plano
    float x;
    float y;
    int escolha = 1;
    int ponto = 1;

    while(escolha != 0){
        cout << "Digite o valor X do ponto: " << ponto << ": ";
        cin >> x;
        cout << "Digite o valor Y do ponto: " << ponto << ": ";
        cin >> y;

        vector <float> p;
        p.push_back(x);
        p.push_back(y);
        pontos.push_back(p);

        cout << "Deseja continuar a inserir pontos? 1 - Sim / 0 - Nao: ";
        cin >> escolha;
        ponto = ponto + 1;
    }

}

void calculaParPontoMaisProximo(vector <vector<float>> pontos){
    //formula: distancia (a,b) = raiz quadrada (x1-x2)² + (y1 - y2)²

float distancia;
float menor = 10000000;
int ponto1x, ponto1y, ponto2x, ponto2y, indicex, indicey;

    for (int i = 0; i < pontos.size(); i++) {
            int a1 = pontos[i][0]; //pega o elemento a1
            int b1 = pontos[i][1]; //pega o elemento b1
        for (int j = 0; j < pontos[i].size(); j++){
                int a2 = pontos[j][0]; //pega o elemento a2
                int b2 = pontos[j][1]; //pega o elemento b2

                int sub1 = a2-a1;
                int sub2 = b2-b1;

                distancia =  sqrt(pow(sub1,2) + pow(sub2,2)); //encontra a distancia
                //cout << distancia << endl;

               // cout << "Distancia: " << distancia << endl;

                if((distancia != 0) && (distancia < menor)){ //se a distancia for diferente de 0 e menor que menor:
                    menor = distancia; //menor recebe a distancia
                    indicex = i+1; //pegamos  a posicao x do ponto de menor de distancia
                    indicey = j+1; //pegamos  a posicao y do ponto de menor de distancia
                    ponto1x = pontos[i][0];
                    ponto1y = pontos[i][1];
                    ponto2x = pontos[j][0];
                    ponto2y = pontos[j][1];
                }
        }
    }
cout << "os pontos com menor distancia sao - ponto " << indicex << ": par X:" << ponto1x << " e Y:" << ponto1y << " e ponto " << indicey <<": par X:" << ponto2x << " e Y:" << ponto2y << endl;
}


int main()
{

    vector <vector <float>> pontos;
    int opcao = 1;

    while (opcao >= 1 && opcao <=3){

    cout << "1. Insere pontos" << endl;
    cout << "2. Mostra pontos" << endl;
    cout << "3. Verificar o par de pontos mais proximos" << endl;
    cout << "4. Sair" << endl;
    cin >> opcao;

    if (opcao == 1){
            inserePontos(pontos);
    } else if (opcao == 2) {
            mostraPontos(pontos);
    } else if (opcao == 3) {
        calculaParPontoMaisProximo(pontos);
    } else {
        cout << "Saindo";
    }
}
return 0;
}
