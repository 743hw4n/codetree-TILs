#include <iostream>
#define OFFSET 1000
#define A 1
#define B 2
#define M 3
using namespace std;

int rect[2001][2001];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			rect[i+OFFSET][j+OFFSET] = A;
		}
	}

	cin >> x1 >> y1 >> x2 >> y2;

	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			rect[i + OFFSET][j + OFFSET] = B;
		}
	}

	cin >> x1 >> y1 >> x2 >> y2;

	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			rect[i + OFFSET][j + OFFSET] = M;
		}
	}

	int square = 0;

	for (int i = 0; i < 2001; i++) {
		for (int j = 0; j < 2001; j++)
		{
			if (rect[i][j] != M && rect[i][j] != 0) {
				square++;
			}
		}
	}

	cout << square;
	return 0;
}