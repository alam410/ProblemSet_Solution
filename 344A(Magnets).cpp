#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=1;// as if the magnets doesn't  care bcz  they already have a group those exiciting
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++) //as we are using arr[i+1] that's why for the last element we needed to do that
    {
        if(arr[i] != arr[i+1])
        {
            a++;
        }
    }
    cout<<a;
}
