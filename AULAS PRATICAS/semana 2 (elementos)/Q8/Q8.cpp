#include <iostream>

using namespace std;

int main()
{

    float dMaior = 0;
    float dMenor = 0;
    float area = 0;

    cin >> dMaior;
    cin >> dMenor;

    area = dMaior * dMenor / 2;

    cout << "A area do losango de lado maior " << dMaior << " e lado menor " << dMenor << " e " << area << " metros quadrados.";

    return 0;
}