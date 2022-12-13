#include <iostream>

using namespace std;

float Media(float n1, float n2)
{
    float media = (n1 + n2) / 2.0;
    return media;
}

int main()
{

    float n1, n2;
    cin >> n1 >> n2;

    cout << Media(n1, n2);

    return 0;
}