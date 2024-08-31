#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int height;
	int weight;

	Student() {};
	Student(string name, int height, int weight) {
		this->name = name;
		this->height = height;
		this->weight = weight;
	}

	void print() {
		cout << name << " " << height << " " << weight << '\n';
	}
};

bool cmp(Student a, Student b) {
	if (a.height == b.height) return a.weight > b.weight;
	return a.height < b.height;
}

int main() {
	int n;
	cin >> n;

	Student* students = new Student[n];
	string name;
	int height, weight;

	for (int i = 0; i < n; i++) {
		cin >> name >> height >> weight;
		students[i] = Student(name, height, weight);
	}

	sort(students, students + n, cmp);

	for (int i = 0; i < n; i++) {
		students[i].print();
	}
}