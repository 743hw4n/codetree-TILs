#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> list;
	int n;
	cin >> n;

	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push_front") {
			int num;
			cin >> num;
			list.push_front(num);
		}

		else if (cmd == "push_back") {
			int num;
			cin >> num;
			list.push_back(num);
		}
		else if (cmd == "pop_front") {
			cout << list.front() << endl;
			list.pop_front();
		}
		else if (cmd == "pop_back") {
			cout << list.back() << endl;
			list.pop_back();
		}
		else if (cmd == "size") {
			cout << list.size() << endl;
		}
		else if (cmd == "empty") {
			cout << list.empty() << endl;
		}
		else if (cmd == "front") {
			cout << list.front() << endl;
		}
		else if (cmd == "back") {
			cout << list.back() << endl;
		}

	}

	return 0;
}