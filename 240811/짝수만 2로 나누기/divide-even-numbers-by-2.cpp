#include <iostream>
using namespace std;
int n;

void divide(int* arr) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) arr[i] /= 2;
	}

}


int main() {

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	
	divide(arr);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}