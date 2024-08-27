#include <iostream>
#include <algorithm>
using namespace std;

bool isSame(int n, int* arr1, int* arr2) {
    for (int i = 0; i < n; i++){
        if (arr1[i] != arr2[i]) return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;

    int arr1[101];
    int arr2[101];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    if (isSame(n, arr1, arr2)) cout << "Yes";
    else cout << "No";

    
    return 0;
}