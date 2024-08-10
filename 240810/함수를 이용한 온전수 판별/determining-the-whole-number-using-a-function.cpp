#include <iostream>
using namespace std;

bool isOnejunsu(int n) {
	if (n % 2 == 0 || n % 10 == 5 || (n % 3 == 0 && n % 9 != 0))
		return false;
	
	return true;
}

int main() {
	int a, b;
	cin >> a >> b;
	
	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isOnejunsu(i))
			cnt++;
	}

	cout << cnt;

	return 0;
}