#include <iostream>

using namespace std;

int multiplica(int n1, int n2)
{
    if (n2 == 0 || n1 == 0)
    {
        return 0;
    }

    else if (n2 == 1)
    {
        return n1;
    }

    else
    {
        return n1 + multiplica(n1, n2 - 1);
    }
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    cout << multiplica(n1, n2);

    return 0;
}
