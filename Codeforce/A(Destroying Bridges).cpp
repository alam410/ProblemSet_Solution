#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i= 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int total = (n * (n - 1)) / 2;
        total -= k;
        int tmp = 0;
        for (int i = 0; i <= n; i++)
        {
            if ((i * (i - 1)) / /2 <= total)
            {
                tmp = max(tmp, i);
            }
            else
            {
                break;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, bridge, can = 1;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        bridge = (n * (n - 1)) / 2;
        int left = bridge - k;
        if(k == 0) {
            can = n;
        }
        else if(left < n && left != 0) { // Added condition left != 0
            can = (n / left) - 1;
        }
        else {
            can = n;
        }
        cout << can << endl;
    }
    return 0;
}

*/
