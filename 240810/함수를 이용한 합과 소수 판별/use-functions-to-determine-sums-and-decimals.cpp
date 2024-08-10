#include <iostream>
using namespace std;

//소수
//모든 자릿수의 합이 짝수 
//개수 출력

bool isMinor(int n) {

	if (n == 1) return false;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

bool isMagic(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum % 2 == 0;
}

int main() {
	int a, b;
	cin >> a >> b;

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isMinor(i) && isMagic(i)) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}