#include <iostream>
using namespace std;

#define NOEXIST -1

int year, month, day;

int isYoon(int year) {
	if (year % 4 == 0) {
		if (year % 100) {
			if (year % 400) {
				return true;
			}
			else 
				return false;
		}
		return true;
	}

	return false;
}

int lastDay(int year, int month) {
	if (month == 2) {
		if (isYoon(year) == true)
			return 29;
		else
			return 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
		return 31;
}

string getSeason(int month) {
	if (month >= 3 && month <= 5) return "Spring";
	else if (month >= 6 && month <= 8) return "Summer";
	else if (month >= 9 && month <= 11) return "Fall";
	else return "Winter";
}
//존재하는 지 확인 방법 
//lastDay 함수 

int main() {
	cin >> year >> month >> day;

	if (day > lastDay(year, month)) cout << NOEXIST;
	else {
		cout << getSeason(month);
	}
	return 0;
}