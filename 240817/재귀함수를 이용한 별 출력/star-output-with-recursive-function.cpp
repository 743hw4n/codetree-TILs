#include <iostream>
using namespace std;

void printStars(int n) {
	if (n == 0) return;
	printStars(n - 1);
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	printStars(n);

	return 0;
}