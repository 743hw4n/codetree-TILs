#include <iostream>
using namespace std;

//전역 변수로 선언하여 0으로 초기화
int checked[101];

int main() {

	int n;
	cin >> n;


	while (n--) {
		int x1, x2;
		cin >> x1 >> x2;

		for (int i = x1; i < x2; i++) {
			checked[i]++;
		}
	}

	int max = 0;
	
	for (int i = 0; i < 101; i++) {
		if (checked[i] > max) max = checked[i];
	}

	cout << max;

	return 0;
}