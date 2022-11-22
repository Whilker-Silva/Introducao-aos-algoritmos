#include <iostream>

using namespace std;

int main()
{
    float valor1;
    float valor2;
    float valor3;
    float valor4;

    float maior1, maior2;

    cin >> valor1;
    cin >> valor2;
    cin >> valor3;
    cin >> valor4;

    // analizando maior valor
    if ((valor1 > valor2) && (valor1 > valor3) && (valor1 > valor4))
    {
        maior1 = valor1;

        if ((valor2 > valor3) && (valor2 > valor4))
        {
            maior2 = valor2;
        }

        if ((valor3 > valor2) && (valor3 > valor4))
        {
            maior2 = valor3;
        }

        if ((valor4 > valor2) && (valor4 > valor3))
        {
            maior2 = valor4;
        }
    }





    if ((valor2 > valor1) && (valor2 > valor3) && (valor2 > valor4))
    {
        maior1 = valor2;

         if ((valor1 > valor3) && (valor1 > valor4))
        {
            maior2 = valor1;
        }

        if ((valor3 > valor1) && (valor3 > valor4))
        {
            maior2 = valor3;
        }

        if ((valor4 > valor1) && (valor4 > valor3))
        {
            maior2 = valor4;
        }
    }






    if ((valor3 > valor1) && (valor3 > valor2) && (valor3 > valor4))
    {
        maior1 = valor3;

         if ((valor1 > valor2) && (valor1 > valor4))
        {
            maior2 = valor1;
        }

        if ((valor2 > valor1) && (valor2 > valor4))
        {
            maior2 = valor2;
        }

        if ((valor4 > valor1) && (valor4 > valor2))
        {
            maior2 = valor4;
        }
    }
    






    if ((valor4 > valor1) && (valor4 > valor2) && (valor4 > valor3))
    {
        maior1 = valor4;

         if ((valor1 > valor2) && (valor1 > valor3))
        {
            maior2 = valor1;
        }

        if ((valor2 > valor1) && (valor2 > valor3))
        {
            maior2 = valor2;
        }

        if ((valor3 > valor1) && (valor3 > valor2))
        {
            maior2 = valor3;
        }
    }  
   

    cout << maior1 << endl
         << maior2;

    return 0;
}