#include <iostream>
using namespace std;

int main()
 {
    float r;
    cout << "Enter radius: ";
    cin >> r;
    float area = 3.14159 * r * r;
    float circumference = 2 * 3.14159 * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference; 
    return 0;
}
