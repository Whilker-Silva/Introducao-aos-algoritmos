#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float raio;
    float area;
    const float PI= M_PI;
    
    cin >> raio;
    
    area = pow(raio,2)*PI;
    
    cout << area;
    return 0;
}
