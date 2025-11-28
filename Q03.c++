#include <iostream>
using namespace std;

int main()
 {
    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After interchange: a = " << a << ", b = " << b;
    return 0;
}
