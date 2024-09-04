#include <iostream>
using namespace std;

int main() {

	int n, k;
	int blocks[101];
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		blocks[i] = 0;
	}

	while (k--)
	{
		int a, b;
		cin >> a >> b;

		for (int i = a; i <= b; i++) {
			blocks[i]++;
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (blocks[i] > max)
			max = blocks[i];
	}

	cout << max;

	return 0;
}