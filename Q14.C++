#include <iostream>
using namespace std;

int main()
 {
    float mm;
    cout << "Enter millimeters: ";
    cin >> mm;
    float inch = mm / 25.4;
    cout << "Inches = " << inch;
    return 0;
}
