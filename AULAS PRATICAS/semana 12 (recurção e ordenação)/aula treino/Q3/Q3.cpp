#include <iostream>

using namespace std;

int ricci(int i, int n1, int n2)
{

    if (i == 0)
    {
        return n1;
    }

    else if (i == 1)
    {
        return n2;
    }

    else
    {
        return ricci(i - 1, n1, n2) + ricci(i - 2, n1, n2);
    }
}
int main()
{

    int n, n1, n2;
    cin >> n1 >> n2 >> n;

    for (int i = 0; i < n; i++)
    {
        cout << ricci(i, n1, n2) << " ";
    }

    return 0;
}
