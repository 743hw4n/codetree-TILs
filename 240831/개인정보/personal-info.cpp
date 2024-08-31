#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

class Student {
public:
	string name;
	int height;
	double weight;

	Student() {};
	Student(string name, int height, double weight){
		this->name = name;
		this->height = height;
		this->weight = weight;
	}

	void print() {
		cout  << name << " " << height << " " << fixed << setprecision(1) << weight << '\n';
	}
};

bool cmp1(Student a, Student b) {
	return a.name < b.name;
}

bool cmp2(Student a, Student b) {
	return a.height > b.height;
}

int main() {
	
	string name;
	int height;
	double weight;

	Student students[5];

	for (int i = 0; i < 5; i++) {
		cin >> name >> height >> weight;
		students[i] = Student(name, height, weight);
	}
	
	cout << "name" << '\n';
	sort(students, students + 5, cmp1);
	for (int i = 0; i < 5; i++) {
		students[i].print();
	}

	cout << '\n';

	cout << "height" << '\n';
	sort(students, students + 5, cmp2);
	for (int i = 0; i < 5; i++) {
		students[i].print();
	}

	return 0;
}