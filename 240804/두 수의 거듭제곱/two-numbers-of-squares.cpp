#include <iostream>
using namespace std;

int getSquare(int n, int square) {
	int result = 1;
	for (int i = 0; i < square; i++) {
		result *= n;
	}
	return result;
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << getSquare(a, b);
	return 0;
}