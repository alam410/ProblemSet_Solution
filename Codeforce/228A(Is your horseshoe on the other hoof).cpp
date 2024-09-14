#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2,n3,n4, a = 0;


        cin >> n1>>n2>>n3>>n4;


        if (n1==n2 || n1==n3 || n1==n4 )
            a++;
        if(n2==n3 || n2==n4)
            a++;
        if(n3==n4)
            a++;

    cout << a;
    return 0;
}
