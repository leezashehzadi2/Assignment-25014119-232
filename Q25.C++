#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter 3 sides: ";
    cin >> a >> b >> c;
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "s = " << s << endl;
    cout << "Area = " << area;
    return 0;
}
