#include <iostream>
#define OFFSET 100
using namespace std;

int checked[201][201];

int main() {

	int n;
	cin >> n;

	while (n--) {
		int x, y;
		cin >> x >> y;
		for (int i = x; i < x+8; i++)
		{
			for (int j = y; j < y+8; j++)
			{
				checked[i + OFFSET][j + OFFSET]++;
			}
		}
	}

	int cnt = 0;

	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 201; j++)
		{
			if(checked[i][j] != 0) 
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}