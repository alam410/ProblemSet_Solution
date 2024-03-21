#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int a,b,c=0;
    cin>>a;
    int arr[200];
    for(int i =0;i<a;i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    for(int i=a;i<a+b;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(a+b));
    for(int i=1;i<=(a+b);i++)
    {
        if(arr[i]!=arr[i-1])
        {
          c++;
        }
    }
    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;


}
