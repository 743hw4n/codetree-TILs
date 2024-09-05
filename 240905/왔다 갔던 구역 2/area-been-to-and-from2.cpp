#include <iostream>
using namespace std;

int checked[1001];

int main() {

	int n;
	cin >> n;

	int location = 500;

	while (n--) {
		int dis; //거리
		char dir; //방향
		cin >> dis >> dir;
		if (dir == 'R') {
			while (dis--) {
				checked[location]++;
				location++;
			}
		}
		else {
			while (dis--) {
				location--;
				checked[location]++;
			}
		}
	}

	int cnt = 0;

	for (int i = 0; i < 1001; i++)
	{
		if (checked[i] >= 2)
			cnt++;
	}
	cout << cnt;
	return 0;
}