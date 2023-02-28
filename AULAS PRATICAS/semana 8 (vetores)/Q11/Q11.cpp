#include <iostream>

using namespace std;

int main()
{
    int v[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 9; i++)
    {
        if ((v[i] % 2) != 0 or v[i] == 2)
        {
            if ((v[i] % 3) != 0 or v[i] == 3)
            {
                if ((v[i] % 5) != 0 or v[i] == 5)
                {
                    if ((v[i] % 7) != 0 or v[i] == 7)
                    {
                        cout << v[i] << " " << i << endl;
                    }
                }
            }
        }
    }

    return 0;
}
