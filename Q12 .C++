#include <iostream>
using namespace std;

int main()
 {
    const float PI = 3.14159;
    float r, h;
    cout << "Enter radius and height: ";
    cin >> r >> h;
    float volume = PI * r * r * h;
    cout << "Volume = " << volume;
    return 0;
}
