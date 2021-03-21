#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n;
    cin >> n;
    if (sqrt(n) * sqrt(n) == n)
        cout << "YES";
    else
        cout << "NO";
}