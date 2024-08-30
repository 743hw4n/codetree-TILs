#include <iostream>
#include <algorithm>
using namespace std;

class profile {
private:
	string name;
	string addr;
	string city;

public:
	profile() {};

	profile(string name, string addr, string city) {
		this->name = name;
		this->addr = addr;
		this->city = city;
	}

	void print() {
		cout << "name " << name << '\n';
		cout << "addr " << addr << '\n';
		cout << "city " << city << '\n';

	}

	bool operator<(const profile& other) const {
		return name < other.name;
	}

};


int main() {
	int n;
	string name, addr, city;

	cin >> n;

	profile* profiles = new profile[n];

	for (int i = 0; i < n; i++) {
		cin >> name >> addr >> city;
		profiles[i] = profile(name, addr, city);
	}

	sort(profiles, profiles + n);
	
	profiles[n-1].print();



	return 0;
}