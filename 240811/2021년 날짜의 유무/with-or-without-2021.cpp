#include <iostream>
using namespace std;


int month[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isDay(int m, int d) {
	if (m < 1 || m > 12) return false;

	if (day[m - 1] > d)
		return true;
	else
		return false;
}

int main() {
	

	int m, d;
	cin >> m >> d;

	if (isDay(m, d)) cout << "Yes";
	else cout << "No";

	return 0;
}