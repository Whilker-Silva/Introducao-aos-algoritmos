#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float v8;
    float media;

    ifstream arqin("dados.txt");
    arqin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8;

    media = (v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8) / 8;

    ofstream arqout("media.txt");
    arqout << setprecision(3) << fixed << media;

    return 0;
}