#include <iostream>
using namespace std;

int main()
 {
    string name, gender;
    int age;
    float height;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter gender: ";
    cin >> gender;
    cout << "\n--- Student Data ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Gender: " << gender << endl;
    return 0;
}
