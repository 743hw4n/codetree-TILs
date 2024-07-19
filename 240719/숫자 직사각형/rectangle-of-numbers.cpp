#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int** arr = new int*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	int num = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = num;
			cout << num << " ";
			num++;
		}
		cout << endl;
	}






}