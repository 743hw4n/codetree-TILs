#include <iostream>
using namespace std;

class print {
private:
	string secret_code;
	char meeting_point;
	int time;
public:
	print(string secret_code, char meeting_point, int time) {
		this->secret_code = secret_code;
		this->meeting_point = meeting_point;
		this->time = time;
	}

	void p() {
		cout << "secret code : " << secret_code << '\n';
		cout << "meeting point : " << meeting_point << '\n';
		cout << "time : " << time << '\n';
	}
};


int main() {

	string secret_code;
	char meeting_point;
	int time;
	cin >> secret_code >> meeting_point >> time;

	print obj(secret_code, meeting_point, time);

	obj.p();

	return 0;
}