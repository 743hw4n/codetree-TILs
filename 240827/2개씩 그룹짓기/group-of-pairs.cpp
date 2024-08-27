#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	int n;
	cin >> n;

	int arr[1001];

	for (int i = 0; i < 2 * n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 2 * n);

	int result;

	for (int i = 0; i < n; i++) {
		result = max(result, arr[i] + arr[2 * n - i - 1]);
	}

	cout << result;
	return 0;
}