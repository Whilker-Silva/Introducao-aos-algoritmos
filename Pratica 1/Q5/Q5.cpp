#include <iostream>

using namespace std;

int main()
{

    const int tanque = 60000;
    const int carro = 900;
    const int soldado = 85;
    const int rifle = 4;
    int peso;
    int quociente;

    cin >> peso;    
   

    cout << peso/tanque << endl;
    quociente = peso%tanque;
    
    cout << quociente/carro << endl;
    quociente = quociente%carro;
    
    cout << quociente/soldado << endl;
    quociente = quociente%soldado;
    
    cout << quociente/rifle;

    return 0;
}
