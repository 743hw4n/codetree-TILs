#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr = new int[n];

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i == 0 || arr[i - 1] != arr[i]) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}