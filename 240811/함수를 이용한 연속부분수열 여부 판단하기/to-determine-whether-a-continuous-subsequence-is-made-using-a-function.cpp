#include <iostream>
using namespace std;

bool isPart(int index, int* arr1, int* arr2, int a, int b) {
    if (index + b > a) // 배열 범위 초과 검사
        return false;

    for (int i = 0; i < b; i++) {
        if (arr1[index + i] != arr2[i])
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        cout << "No" << endl;
        return 0;
    }

    int* arr1 = new int[a];
    int* arr2 = new int[b];

    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < b; i++) {
        cin >> arr2[i];
    }

    bool found = false;
    for (int i = 0; i <= a - b; i++) { // 모든 가능한 위치에서 부분 수열 검사
        if (arr1[i] == arr2[0]) {
            if (isPart(i, arr1, arr2, a, b)) {
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    delete[] arr1; // 메모리 해제
    delete[] arr2;

    return 0;
}