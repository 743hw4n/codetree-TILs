#include <iostream>
using namespace std;

int f(int num) {
	if (num < 10) return num;

	return f(num / 10) + num % 10;
}

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int num = a * b * c;

	cout << f(num);


	return 0;
}