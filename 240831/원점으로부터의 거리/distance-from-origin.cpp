#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point {
public:
	int x;
	int y;
	int idx;
	int distance;

	Point() {};
	Point(int x, int y, int idx) {
		this->x = x;
		this->y = y;
		this->idx = idx;
		distance = abs(x) + abs(y);
	}

};

bool cmp(Point a, Point b) {
	if (a.distance == b.distance) return a.idx< b.idx;
	return a.distance < b.distance;
}

int main() {
	int n;
	cin >> n;

	Point* points = new Point[n];
	
	int x, y;

	for (int i = 0; i < n; i++) {
		cin  >> x >> y;
		points[i] = Point(x, y, i+1);
	}

	sort(points, points + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << points[i].idx << '\n';
	}
}