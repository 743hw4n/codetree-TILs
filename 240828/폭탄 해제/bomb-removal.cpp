#include <iostream>
using namespace std;

class bomb {
private:
	string code;
	char color;
	int second;
public:
	bomb() {};

	bomb(string code, char color, int second) {
		this->code = code;
		this->color = color;
		this->second = second;
	}

	void print() {
		cout << "code : " << code << '\n';
		cout << "color : " << color << '\n';
		cout << "second : " << second << '\n';
	}
};

int main() {

	string code;
	char color;
	int second;

	cin >> code >> color >> second;

	bomb bomb(code, color, second);
	bomb.print();
	
	return 0;
}