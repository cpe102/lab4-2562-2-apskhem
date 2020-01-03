#include "iostream"
#include "cmath"
using namespace std;

float findDistance(float u, float a, float t) {
  return u*t + 0.5*a*pow(t,2);
}

int main() {

  float u, a, t;
  cout << "Enter initial velocity: ";
  cin >> u;
  cout << "Enter initial acceration: ";
  cin >> a;
  cout << "Enter initial time: ";
  cin >> t;
  cout << "Distance: " << findDistance(u,a,t);

  return 0;
}
