#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
            b++;
    }
    if(a>b)
    {
        cout<<"Anton";
    }
    else if(b>a)
    {
        cout<<"Danik";
    }
    else
        cout<<"Friendship";
}
