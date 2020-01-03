#include "iostream"
#include "cmath"
using namespace std;

int findDivisor(int val) {
    if (val > 1) {
        int i = 2;
        while (val % i != 0) i++;
        return i;
    }
    else {
        return -1;
    }
}

int main() {

  int x;
  cout << "Enter integer: ";
  cin >> x;
  cout << "Result: " << findDivisor(x);

  return 0;
}
