#include "iostream"
#include "cmath"
using namespace std;

float FuncCal(float x) {
    const double e = 2.71828182845904523536;
    return 3*pow(x, 3) + 2*e + pow(2, 2*x+1) + pow(x*x+1, 0.5);
}

int main() {

    float x;
    cout << "Enter x: ";
    cin >> x;

    cout << "Result y: " << FuncCal(x);

    return 0;
}