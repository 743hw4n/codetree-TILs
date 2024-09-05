#include <iostream>
#define BLACK 1
#define WHITE 2
using namespace std;

int tiles[200001];


int main() {

	int n;
	cin >> n;

	int location = 100000;

	while (n--) {
		int t;
		char dir;
		cin >> t >> dir;

		if (dir == 'R') {
			for (int i = 0; i < t-1; i++)
			{
				tiles[location] = BLACK;
				location++;
			}
			tiles[location] = BLACK;
		}
		else if (dir == 'L') {
			for (int i = 0; i < t - 1; i++)
			{
				tiles[location] = WHITE;
				location--;
			}
			tiles[location] = WHITE;
		}
	}

	int b = 0, w = 0;

	for (int i = 0; i < 200001; i++)
	{
		if (tiles[i] == BLACK)
			b++;
		else if (tiles[i] == WHITE)
			w++;
	}

	cout << w << " " << b << '\n';
	return 0;
}