#include <iostream>
using namespace std;

int main()
{
    float a1, b1, c1;
    float a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    int D = a1 * b2 - a2 * b1;
    int Dx = c1 * b2 - c2 * b1;
    int Dy = a1 * c2 - a2 * c1;
    if (D == 0)
    {
        if (Dx + Dy == 0)
        {
            cout << "Vo so nghiem";
        }
        else
            cout << "Vo nghiem";
    }
    else
    {
        cout << "x = " << Dx / D << ", y = " << Dy / D;
    }
}