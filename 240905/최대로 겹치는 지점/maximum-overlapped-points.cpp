#include <iostream>
using namespace std;

int checked[101];

int main() {

	int n;
	cin >> n;

	while (n--) {
		int x1, x2;
		cin >> x1 >> x2;

		for (int i = x1; i <= x2; i++) {
			checked[i]++;
		}
	}

	int max = 0;
	for (int i = 0; i <= 101; i++)
	{
		if (checked[i] > max)
			max = checked[i];
	}

	cout << max;
}