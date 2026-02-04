#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "JIM" << setw(10) << 10 << setw(10) << fixed << setprecision(1) << 14.50 << endl;
    cout << left << setw(10) << "MARY" << setw(10) << 3 << setw(10) << fixed << setprecision(1) << 116.25 << endl;
    cout << left << setw(10) << "JASON" << setw(10) << 100 << setw(10) << fixed << setprecision(1) << 12.00 << endl;

    return 0;
}