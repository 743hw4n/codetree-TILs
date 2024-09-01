#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int day = 11, hour = 11, min = 11;
	
	if (a < day || (a == day && b < hour) || (a == day && b == hour && c < min)) {
		cout << -1;
		return 0;
	}
	int elapsed_min = 0;


	while (1) {
		if (day == a && hour == b && min == c) break;

		min++;
		elapsed_min++;

		if (min == 60) {
			hour++;
			min = 0;
		}

		if (hour == 24) {
			hour = 0;
			day++;
		}
	}

	cout << elapsed_min;

	return 0;
}