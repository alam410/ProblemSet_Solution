#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, m, k;
        cin >> n >> m >> k;

        int arr1[n], arr2[m];

        for(int j = 0; j < n; j++) {
            cin >> arr1[j];
        }

        for(int l = 0; l < m; l++) {
            cin >> arr2[l];
        }

        int sum = 0; // Initialize sum for each test case
        for(int j = 0; j < n; j++) {
            for(int l = 0; l < m; l++) {
                if(arr1[j] + arr2[l] <= k) {
                    sum++;
                }
            }
        }
        cout << sum << endl; // Print sum for the current test case
    }
    return 0;
}
