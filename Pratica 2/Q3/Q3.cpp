#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;
    float distancia;

    ifstream arquivo("entrada.txt");
    arquivo >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));

    cout << distancia;

    return 0;
}