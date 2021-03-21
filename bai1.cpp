#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << a + b + c << endl;
            cout << "vuong";
        }
        else if (a == b && b == c)
        {
            cout << 3 * a << endl;
            cout << "deu";
        }
        else if (a == b || b == c || a == c)
        {
            cout << a + b + c << endl;
            cout << "can";
        }
        else
        {
            cout << a + b + c << endl;
            cout << "thuong";
        }
    }
    else
    {
        cout << "Invalid";
    }
}