#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    const int pot_m2 = 18;
    float dimensao1;
    float dimensao2;
    float area;
    float pot_necessaria;

    cin >> dimensao1 >> dimensao2;
    area = dimensao1 * dimensao2;
    pot_necessaria = area * pot_m2;

    ofstream arq("potencia.txt");
    arq << setprecision(1) << fixed << area << "m2" << endl
        << setprecision(1) << fixed << pot_necessaria << "W";

    return 0;
}