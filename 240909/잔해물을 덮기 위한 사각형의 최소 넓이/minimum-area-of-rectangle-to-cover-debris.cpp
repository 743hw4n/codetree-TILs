#include <iostream>
#define OFFSET 1000
#define MAX_R 2001
using namespace std;

//checked == 1인 배열에서 x,y의 최소, x,y의 최대값을 구해서 
// 곱하기

int xs[2], ys[2], xl[2], yl[2];
int checked[MAX_R][MAX_R];

int main() {

	for (int i = 0; i < 2; i++)
	{
		cin >> xs[i] >> ys[i] >> xl[i] >> yl[i];
		xs[i] += OFFSET;
		ys[i] += OFFSET;
		xl[i] += OFFSET;
		yl[i] += OFFSET;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int x = xs[i]; x < xl[i]; x++)
		{
			for (int y = ys[i]; y < yl[i]; y++)
			{
				checked[x][y] = i + 1;
			}
		}
	}

	int min_x = MAX_R, max_x = 0;
	int min_y = MAX_R, max_y = 0;
	bool first_rect_exist = false;

	for (int x = 0; x < MAX_R; x++)
	{
		for (int y = 0; y < MAX_R; y++)
		{
			if (checked[x][y] == 1) {
				first_rect_exist = true;
				min_x = min(min_x, x);
				max_x = max(max_x, x);
				min_y = min(min_y, y);
				max_y = max(max_y, y);
			}
		}
	}

	int area;

	if (!first_rect_exist)
		area = 0;
	else 
		area = (max_x - min_x + 1) * (max_y - min_y + 1);

	cout << area;

	return 0;
}