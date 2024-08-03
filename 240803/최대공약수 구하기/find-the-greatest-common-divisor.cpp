#include <iostream>
using namespace std;

int gcd(int n, int m) {
	int smaller = min(n, m);
	int result = 1;

	for (int i = 1; i <= smaller; i++) {
		if (n % i == 0 && m % i == 0) {
			result = i;
		}
	}

	return result;
}


int main() {

	int n, m;
	cin >> n >> m;

	cout << gcd(n, m);

	return 0;

}