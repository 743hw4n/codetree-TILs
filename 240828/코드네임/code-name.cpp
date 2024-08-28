#include <iostream>
using namespace std;

class Agent {

public:
	char name;
	int score;

	Agent() {};

	Agent(char name, int score) {
		this->name = name;
		this->score = score;
	}
};

int main() {

	Agent agents[5];
	for (int i = 0; i < 5; i++) {
		cin >> agents[i].name >> agents[i].score;
	}

	Agent min('a', 100);

	for (int i = 0; i < 5; i++) {
		if (agents[i].score < min.score) {
			min.name = agents[i].name;
			min.score = agents[i].score;
		}
	}

	cout << min.name << " " << min.score;

	return 0;
}