#include <iostream>
#include <algorithm>
using namespace std;

class Student {
private:
	string name;
	int height;
	int weight;
public:
	Student() {};

	Student(string name, int height, int weight) {
		this->name = name;
		this->height = height;
		this->weight = weight;
	}

	int getHeight() {
		return height;
	}

	void print() {
		cout << name << " " << height << " " << weight << '\n';
	}
};

bool cmp(Student a, Student b) {
	return a.getHeight() < b.getHeight();
}

int main() {
	int n, height, weight;
	string name;

	cin >> n;

	Student* students = new Student[n];

	for (int i = 0; i < n; i++) {
		cin >> name >> height >> weight;
		students[i] = Student(name, height, weight);
	}

	sort(students, students + n, cmp);
	 
	for (int i = 0; i < n; i++) {
		students[i].print();
	}
	

	return 0;
}