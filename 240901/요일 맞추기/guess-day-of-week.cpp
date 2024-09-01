#include <iostream>
#include <string>
using namespace std;

int main() {

	string days[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	int numberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31 };
	
	int startDay = 0; //시작날은 월요일

	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;
	
	int d1Sum = 0;

	for (int i = 0; i < m1 - 1; i++) {
		d1Sum += numberOfDays[i];
	}
	d1Sum += d1;

	int d2Sum = 0;

	for (int i = 0; i < m2 - 1; i++) {
		d2Sum += numberOfDays[i];
	}
	d2Sum += d2;

	int sum = d2Sum - d1Sum;

	int dayIndex = (startDay + sum) % 7;
	if (dayIndex < 0) dayIndex += 7;

	cout << days[dayIndex];
	return 0;
}