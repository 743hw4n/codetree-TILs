#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string n;
    cin >> n;

    int num = 0;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1')
            num = num * 2 + 1;
        else
            num = num * 2;
    }

    cout << num;
}