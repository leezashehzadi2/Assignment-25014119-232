#include <iostream>
using namespace std;

int main()
 {
    int roll, pf, itc, cg;
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter marks in PF, ITC and CG: ";
    cin >> pf >> itc >> cg;
    int total = pf + itc + cg;
    float avg = total / 3.0;
    cout << "\nTotal = " << total << endl;
    cout << "Average = " << avg;
    return 0;
}
