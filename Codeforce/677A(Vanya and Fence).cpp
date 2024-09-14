#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,bent=0,counter=0,sum=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            bent=bent+2;
        }
        else
        {
            counter++;
        }
    }
    sum=bent+counter;
    cout<<sum;

}
