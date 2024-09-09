#include <iostream>
#define RED 1
#define BLUE 2
#define OFFSET 100
using namespace std;

int color[2] = { RED, BLUE };
int checked[201][201];

int main() {
	int n;
	cin >> n;


	for(int k = 0; k < n; k++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1; i < x2; i++)
		{
			for (int j= y1; j < y2; j++)
			{
				checked[i+OFFSET][j+OFFSET] = color[k % 2];
			}
		}
	}

	int area = 0;

	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 201; j++)
		{
			if(checked[i][j]== BLUE)
				area++;
		}
	}

	cout << area;
	return 0;
}