#include <iostream>
#include <cmath>
using namespace std;

int f(int n) {
	if (n <= 2) return pow(2,n);

	return f(n-1) * f(n - 2) % 100;
}

int main() {
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}