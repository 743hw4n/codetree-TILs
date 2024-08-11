#include <iostream>
using namespace std;

bool isPart(int index, int* arr1, int* arr2, int b) {
	for (int i = 0; i < b; i++) {
		if (arr1[index] != arr2[i])
			return false;
		else
			index++;
	}

	return true;
}
int main() {
	int a, b;
	cin >> a >> b;

	int* arr1 = new int[a];
	int* arr2 = new int[b];

	for (int i = 0; i < a; i++) {
		int num;
		cin >> num;
		arr1[i] = num;
	}

	for (int i = 0; i < b; i++) {
		int num;
		cin >> num;
		arr2[i] = num;
	}

	int index = 0;

	for (int i = 0; i < a; i++) {
		if (arr1[i] == arr2[0])
		{
			index = i;
			break;
		}
	}

	if (isPart(index, arr1, arr2, b))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}