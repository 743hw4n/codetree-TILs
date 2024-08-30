#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Weather {
private:
	string date;	
	string day;
	string weather;
public:
	Weather() {};

	Weather(string date, string day, string weather) {
		this->date = date;
		this->day = day;
		this->weather = weather;
	}

	void print() {
		cout << date << " " << day << " " << weather << '\n';
	}

	string getWeather() {
		return weather;
	}

	string getDate() {
		return date;
	}
};

bool cmp(Weather a, Weather b) {
	return a.getDate() < b.getDate();
}

int main() {
	int n;
	string date, day, weather;

	cin >> n;

	Weather* datas = new Weather[n];
	
	for (int i = 0; i < n; i++) {
		cin >> date >> day >> weather;
		datas[i] = Weather(date, day, weather);
	}

	vector<Weather> v;

	for (int i = 0; i < n; i++) {
		if (datas[i].getWeather() == "Rain") v.push_back(datas[i]);
	}


	sort(v.begin(), v.end(), cmp);
	
	v.front().print();

	
	return 0;
}