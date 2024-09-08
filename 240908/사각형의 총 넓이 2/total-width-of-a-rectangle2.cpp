#include <iostream>
#define OFFSET 100
using namespace std;

int rect[201][201];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int x1, y1, x2, y2;
	while (n--) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++)
			{
				rect[i+OFFSET][j+OFFSET] = 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 201; i++) {
		for (int j = 0; j < 201; j++)
		{
			if (rect[i][j] == 1)
				cnt++;
		}
	}

	cout << cnt;
}