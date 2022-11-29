#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float cateto1;
    float cateto2;
    float hipotenusa;

    cin >> cateto1;
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << hipotenusa;

    return 0;
}