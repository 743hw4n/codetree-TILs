#include <iostream>
using namespace std;

int main() {

    double a = 5.26;
    double b = 8.27;

    double c = a * b;


    cout << fixed;
    cout.precision(3);

    cout << c;

    return 0;
}