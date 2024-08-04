#include <iostream>
using namespace std;

//4로 나눠짐
// 100으로 나눠지나 400으로 안 나눠지면 윤년 아님.
bool isCorrect(int n) {
	if (n % 4 == 0) {
		if (n % 100 == 0 && n % 400 != 0) {
			return false;
		}
		return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;

	if (isCorrect(n)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}



	return 0;
}