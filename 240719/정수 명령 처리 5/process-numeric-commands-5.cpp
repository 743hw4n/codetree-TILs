#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	int n;
	cin >> n;

	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push_back")
		{
			int a;
			cin >> a;
			v.push_back(a);
		}

		else if (cmd == "pop_back") {
			v.pop_back();
		}

		else if (cmd == "size") {
			cout << v.size() << endl;
		}

		else if (cmd == "get") {
			int k;
			cin >> k;
			cout << v.at(k-1) << endl;
		}
	}

	return 0;
}