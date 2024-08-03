#include <iostream>
using namespace std;

bool isMagicNumber2(int n) {
	int a = n % 10;
	int b = n / 10;

	return ((a + b) % 5 == 0);
}

void isMagicNumber(int n) {
	if (n % 2 == 0 && isMagicNumber2(n))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main() {
	int n;
	cin >> n;

	isMagicNumber(n);

	return 0;
}