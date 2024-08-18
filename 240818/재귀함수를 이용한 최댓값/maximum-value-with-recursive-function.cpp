#include <iostream>
#include <vector>
using namespace std;

int largest = 0;

void f(int n) {
	if (n == 0) return;
	int num;
	cin >> num;
	if (num > largest) largest = num;
	f(n-1);
}

int main() {
	int n;
	cin >> n;


	f(n);

	cout << largest;


	return 0;
}