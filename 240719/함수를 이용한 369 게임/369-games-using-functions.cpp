#include <iostream>
using namespace std;


//369중 하나가 들어있거나
// 숫자 자체가 3의 배수
bool threeSixNine(int n) {
	return n == 3 || n == 6 || n == 9;
}

bool include369(int n) {
	if (n < 0) n = -n;

	while (n > 0) {
		int digit = n % 10;

		if (threeSixNine(digit)) return true;
		n /= 10;
	}
	return false;
}
int main() {
	int a, b;
	cin >> a >> b;

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 || include369(i))
			cnt++;
	}

	cout << cnt;

	return 0;
}