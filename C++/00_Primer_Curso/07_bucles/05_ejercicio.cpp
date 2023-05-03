#include <iostream>
using namespace std;

int main()
{
    int n, res = 0;

    cout << "Digite un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            res -= i;
        }
        else
        {
            res += i;
        }
    }

    cout << "Resultado: " << res << endl;

    return 0;
}