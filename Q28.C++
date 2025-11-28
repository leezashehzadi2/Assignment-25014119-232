#include <iostream>
using namespace std;

int main()
 {
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    float disc = b*b - 4*a*c;
    cout << "Discriminant = " << disc;
    return 0;
}
