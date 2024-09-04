#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a; // a 진수로 이루어진 
	int b;
	string n; // 숫자 n
	cin >> a >> b;
	cin >> n;

	int num = 0;

	for (int i = 0; i < n.size(); i++) {
		num = num * a + (n[i] - '0');
	}

	

	int digits[30];
	int cnt = 0;

	while (true) {
		if (num < b) {
			digits[cnt++] = num;
			break;
		}

		digits[cnt++] = num % b;
		num /= b;
	}
	
	for (int i = cnt - 1; i >= 0; i--) {
		cout << digits[i];
	}

}