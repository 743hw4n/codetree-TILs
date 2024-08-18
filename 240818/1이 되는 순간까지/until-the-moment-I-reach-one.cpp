#include <iostream>
using namespace std;
int cnt;


void f(int n) {
	if (n == 1) {
		cout << cnt;
		return;
	}

	if (n % 2 == 0) {
		cnt++;
		f(n / 2);
	}
	else {
		cnt++;
		f(n / 3);
	}
}


int main() {
	int n;
	cin >> n;

	cnt = 0;
	f(n);

	return 0;
}