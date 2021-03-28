#include <iostream> //biblioteca padrão de entrada e saída
#include <vector>
#include <math.h>



//Nome: Loham Santos da Silva - PPGCC (Matr. 2021.10182)
//Número 5: BruteForceClosestPair
//Premissa:
//Questão incompleta. Tirar dúvida com o professor.
using namespace std;

int main()
{

    int P[6][2]= {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    double d;
    int i;
    int j;
    int ponto1;
    int ponto2;

    d = 0;

    for(i=0; i<5;i++){
        for(j=i+i; i<6;i++){
            ponto1 = P[i] - P[j];
            ponto2 = P[i] - P[j];
            d = sqrt(pow(ponto1,2)) + (pow(ponto2,2));
        }
    return d;
    }
}
