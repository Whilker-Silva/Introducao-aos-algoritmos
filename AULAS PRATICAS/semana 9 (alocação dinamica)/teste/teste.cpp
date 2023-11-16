#include <iostream>

using namespace std;

int main()
{

    int *vetor;
    int n;

    do
    {
        cin >> n;

        vetor = new int[n];
        for (int i = 0; i < n; i++)
        {
            vetor[i] = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << vetor[i] << " ";
        }

        cout << endl;

        delete[] vetor;
    } while (n != 0);

    return 0;
}