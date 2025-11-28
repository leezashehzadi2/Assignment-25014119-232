#include <iostream>
using namespace std;

int main()
 {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Age in months = " << age * 12 << endl;
    cout << "Age in days = " << age * 365;
    return 0;
}
