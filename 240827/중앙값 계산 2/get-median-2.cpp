#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n;
	int arr[101];
	int index;

	cin >> n;

	for (index = 1; index <= n; index++) {
		cin >> arr[index];
		if (index % 2 == 1) {
			sort(arr+1, arr + index+1);
			cout << arr[index / 2 + 1] << " ";
		}
	}

	return 0;
}