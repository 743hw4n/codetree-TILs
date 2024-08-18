#include <iostream>
using namespace std;

int arr[100];
int result = 0;

int x1(int num1, int num2) { //최소공배수 return.
	int small = min(num1, num2);
	int x = 0; //최대공약수
	for (int i = 1; i <= small; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			x = i;
	}
	return x;
}

int x2(int num1, int num2) {
	return num1 * num2 / x1(num1, num2);
}

int v(int n, int* arr) {
	if (n == 1) return arr[0];
	
	int crr = x2(arr[n - 1], arr[n - 2]);

	int rest = v(n - 1, arr);

	return x2(crr, rest);
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int result = v(n, arr);
	cout << result;
	return 0;
}