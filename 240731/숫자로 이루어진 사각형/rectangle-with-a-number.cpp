#include <iostream>
using namespace std;

int num = 1;

void oneDigit() {

	if (num > 9) {
		num = 1;
	}

	cout << num << " ";
	num++;
}
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			oneDigit();
		}
		cout << endl;
	}

	return 0;
}