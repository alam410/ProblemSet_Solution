#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s=0;
    cin>>n;
    if(n%5==0)
    {
        s=n/5;
        cout<<s;
    }
    else
    {
        s=n/5;
        s++;
        cout<<s;
    }
}
