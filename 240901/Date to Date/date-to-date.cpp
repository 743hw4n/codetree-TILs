#include <iostream>
using namespace std;

int main() {
	int numberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m1, m2, d1, d2;
	cin >> m1 >> d1 >> m2 >> d2;

	int d1Sum = 0;
	for (int i = 0; i < m1-1; i++) {
		d1Sum += numberOfDays[i];
	}
	d1Sum += d1;

	int d2Sum = 0;
	for (int i = 0; i < m2-1; i++) {
		d2Sum += numberOfDays[i];
	}
	d2Sum += d2;

	
	
	cout << d2Sum - d1Sum+1;

	return 0;
}