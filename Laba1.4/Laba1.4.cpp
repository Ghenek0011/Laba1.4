#include <iostream>
#include < math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, c, S;
    int n, k;
    cout << "x= ";
    cin >> x;
    cout << endl;
    cout << "n = ";
    cin >> n;
    cout << endl;
    S = 0;
    for (k = 1; k <= n; k++)
    {
        c = (k * k + x * x * x) / 2;
        S = S + c;
    }
    cout << "Сумма равна " << S << endl;
    return 0;
}

