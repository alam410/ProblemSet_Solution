#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr1[t], arr2[t];

    for (int i = 0; i < t; i++) {
        cin >> arr1[i] >> arr2[i];
    }

    for (int i = 0; i < t; i++) {
        int a = 0; // Resetting a in each iteration
        if (arr1[i] < arr2[i]) {
            a = arr2[i] - arr1[i];
        } else if (arr1[i] > arr2[i]) {
            if (arr1[i] % arr2[i] != 0) {
                a = arr2[i] - (arr1[i] % arr2[i]); // Correcting logic
            }
        }
        cout << a << endl; // Print the result and newline
    }

    return 0;
}
