#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string binary;
	cin >> binary;

	int num = 0;

	for (int i = 0; i < binary.size(); i++) {
		num = num * 2 + (binary[i] - '0');
	}

	num *= 17;

	int digits[30];
	int cnt = 0;

	while (true) {
		if (num < 2) {
			digits[cnt++] = num;
			break;
		}

		digits[cnt++] = num % 2;
		num /= 2;
	}
	
	for (int i = cnt - 1; i >= 0; i--) {
		cout << digits[i];
	}

}