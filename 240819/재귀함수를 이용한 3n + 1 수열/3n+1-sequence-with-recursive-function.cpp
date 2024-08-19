#include <iostream>
using namespace std;
int cnt = 0;

int f(int n) {
	if (n == 1) return cnt;

	cnt++;
	if (n % 2 == 0) return f(n / 2);
	else return f(3 * n + 1);

}

int main() {
	int n;
	cin >> n;

	cout << f(n);
	 
	return 0;
}