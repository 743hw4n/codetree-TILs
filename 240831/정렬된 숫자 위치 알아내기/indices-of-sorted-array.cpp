#include <iostream>

#include <algorithm>
using namespace std;

class Point {
public:
	int value;
	int idx;

	Point() {};
	Point(int value, int idx) {
		this->value = value;
		this->idx = idx;
	}

};

bool cmp(Point a, Point b) {
	if (a.value == b.value) {
		return a.idx < b.idx;
	}
	return a.value < b.value;
}

int main() {
	int n;
	cin >> n;

	Point arr[1001];
	int answer[1001];

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		arr[i] = Point(value,i);
	}

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++) {
		answer[arr[i].idx] = i + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

}