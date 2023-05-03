

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, result = 0;

    cout << "Digite numero A: ";
    cin >> a;

    cout << "Digite numero B: ";
    cin >> b;

    cout << "Digite numero C: ";
    cin >> c;

    cout << "Digite numero D: ";
    cin >> d;

    result = a + (b / (c - d));

    cout.precision(2);
    cout << "\bResultado: " << result;

    return 0;
}