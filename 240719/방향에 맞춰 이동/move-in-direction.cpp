#include <iostream>
using namespace std;

int main() {

	int x = 0, y = 0;
	
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	
	char dir[4] = { 'E','N','W','S' };


	int n;
	cin >> n;

	while (n--) {
		char char_dir;
		cin >> char_dir;

		if (char_dir == dir[0]) {
			int num;
			cin >> num;
			for (int i = 0; i < num; i++) {
				x += dx[0], y += dy[0];
			}
		}

		else if (char_dir == dir[1]) {
			int num;
			cin >> num;
			for (int i = 0; i < num; i++) {
				x += dx[1], y += dy[1];
			}
		}

		else if (char_dir == dir[2]) {
			int num;
			cin >> num;
			for (int i = 0; i < num; i++) {
				x += dx[2], y += dy[2];
			}
		}

		else if (char_dir == dir[3]) {
			int num;
			cin >> num;
			for (int i = 0; i < num; i++) {
				x += dx[3], y += dy[3];
			}
		}
	}

	cout << x << " " << y;

	return 0;
}