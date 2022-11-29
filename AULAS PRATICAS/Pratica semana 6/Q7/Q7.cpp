#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float distancia_KM;
    float velocidade;
    float tempo;

    float distancia_Milhas;
    float previsao;

    ifstream arqin("entrada.txt");

    while (arqin >> distancia_KM && arqin >> velocidade && arqin >> tempo)
    {
        distancia_Milhas = distancia_KM / 1.852;

        previsao = velocidade * tempo;
        previsao = previsao / 1.852;
        previsao = previsao + distancia_Milhas;

        cout << fixed << setprecision(2) << distancia_Milhas << " " << previsao << endl;
    }

    return 0;
}