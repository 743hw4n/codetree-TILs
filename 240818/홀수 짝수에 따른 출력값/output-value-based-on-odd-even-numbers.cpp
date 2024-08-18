#include <iostream>
using namespace std;

int sumEven(int n) {
	if (n < 2) return 0;

	return n + sumEven(n - 2);
}

int sumOdd(int n) {
	if (n < 1) return 0;

	return n + sumOdd(n - 2);
}

int main() {

	int n;
	cin >> n;

	if (n % 2 == 0) cout << sumEven(n);
	else cout << sumOdd(n);
	return 0;
}