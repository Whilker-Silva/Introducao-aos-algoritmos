#include <iostream>

using namespace std;

int main()
{

    const int chocolate = 17;
    const int trufa = 5;
    const int bala = 1;
    int dinheiro;
    int resto;

    cin >> dinheiro;

    cout << dinheiro/chocolate << endl;
    resto = dinheiro%chocolate;

    cout << resto/trufa << endl;
    resto = resto%trufa;

    cout << resto/bala;


    return 0;
}