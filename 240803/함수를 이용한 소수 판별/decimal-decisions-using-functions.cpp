#include <iostream>
using namespace std;

bool isPrime(int a) {
	if (a == 2) return true;

	for (int i = 2; i < a; i++) {
		if (a % i == 0) return false;
	}

	return true;
}

int sumPrime(int a, int b) {
	int sum = 0;

	for (int i = a; i <= b; i++) {
		if (isPrime(i)) sum += i;
	}

	return sum;
}	

int main() {
	int a, b;
	cin >> a >> b;

	cout << sumPrime(a, b);

	return 0;
}