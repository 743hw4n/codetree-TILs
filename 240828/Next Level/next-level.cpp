#include <iostream>
using namespace std;

class user {
private:
	string id;
	int lv;
public:
	user(string id = "codetree", int lv = 10) {
		this->id = id;
		this->lv = lv;
	}
	void print() {
		cout << "user " << id << " lv " << lv << '\n';
	}
};

int main() {
	
	string id;
	int lv;
	cin >> id >> lv;


	user user1;
	user1.print();

	user user2(id, lv);
	user2.print();

	return 0;
}