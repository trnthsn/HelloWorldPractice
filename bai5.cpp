#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calculateDelta(float a, float b, float c)
{
    float delta = 0;
    delta = b * b - 4 * a * c;
    return delta;
}
void positiveDelta(float a, float b, float delta)
{
    float nghiem1, nghiem2;
    nghiem1 = (-b - sqrt(delta)) / (2 * a);
    nghiem2 = (-b + sqrt(delta)) / (2 * a);
    cout << fixed << showpoint << setprecision(2);
    cout << nghiem1 << endl << nghiem2;
}
void negativeDelta(float a, float b, float delta)
{
    float phanThuc, phanAo;
    phanThuc = (-b) / 2 * a;
    phanAo = sqrt(abs(delta)) / 2 * a;
    cout << fixed << showpoint << setprecision(2);
    cout << phanThuc << " " << -phanAo << endl;
    cout << phanThuc << " " << phanAo << endl;
}
void DeltaEqualZero(float a, float b)
{
    cout << fixed << showpoint << setprecision(2);
    cout << -b / (2 * a);
}
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float delta = calculateDelta(a, b, c);
    if (delta > 0)
        positiveDelta(a, b, delta);
    else if (delta < 0)
        negativeDelta(a, b, delta);
    else
        DeltaEqualZero(a, b);
}