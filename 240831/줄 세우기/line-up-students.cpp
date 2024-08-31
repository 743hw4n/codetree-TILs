#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	int height;
	int weight;
	int num;

	Student() {};
	Student(int height, int weight, int num){
		this->height = height;
		this->weight = weight;
		this->num = num;
	}

	void print() {
		cout << height << " " << weight << " " << num << '\n';
	}
};

bool cmp(Student a, Student b) {
	if (a.height == b.height) {
		if (a.weight == b.weight)
			return a.num < b.num;
		return a.weight > b.weight;
	}
	return a.height > b.height;
}

int main() {
	int n;
	int height, weight;
	cin >> n;

	Student* students = new Student[n];

	for (int i = 0; i < n; i++) {
		cin >> height >> weight;
		students[i] = Student(height,weight,i+1);
	}

	sort(students, students + n, cmp);

	for (int i = 0; i < n; i++) {
		students[i].print();
	}

	return 0;
}