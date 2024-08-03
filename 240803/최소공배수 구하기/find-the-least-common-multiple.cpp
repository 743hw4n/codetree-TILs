#include <iostream>
using namespace std;


int gcd(int a, int b) {
    int smaller = min(a, b);
    int result = 0;

    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }

    return result;
}

int lcd(int a, int b) {
    return (a * b) / gcd(a, b);
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << lcd(a, b);
}