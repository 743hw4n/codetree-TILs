#include <iostream>
using namespace std;

void print(int n) {
	if (n == 0) return;

	print(n - 1);
	cout << n << " ";
}

void printReverse(int n) {
	if (n == 0) return;

	cout << n << " ";
	printReverse(n - 1);
}

int main() {
	int n;
	cin >> n;

	print(n);
	cout << '\n';
	printReverse(n);
	return 0;
}