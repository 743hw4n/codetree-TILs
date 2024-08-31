#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

//
//class Student {
//public:
//	int height;
//	int 
//};

bool compareTuples(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    int heightA, weightA, idxA;
    int heightB, weightB, idxB;

    tie(heightA, weightA, idxA) = a;
    tie(heightB, weightB, idxB) = b;

    // First compare by height in ascending order
    if (heightA != heightB) {
        return heightA < heightB;
    }

    // If heights are the same, compare by weight in descending order
    return weightA > weightB;
}

int main() {
	tuple<int, int, int> student[1001];

	int n;
	cin >> n;

	int height, weight, idx;
	for (int i = 0; i < n; i++) {
		cin >> height >> weight;
		student[i] = make_tuple(height, weight, i+1);
	}

	sort(student, student + n, compareTuples);

	for (int i = 0; i < n; i++) {
		tie(height, weight, idx) = student[i];
		cout << height << " " << weight << " " << idx << '\n';
	}


}