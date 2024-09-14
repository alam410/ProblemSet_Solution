#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    while(n!=0)
    {


        if(n>=100) //|| (n%20==0) || (n%10==0)  || (n%5==0)  || (n%1==0)    )
        {
            n= n-100;
            a++;
        }
        else if (n>=20)
        {
            n= n-20;
            a++;
        }
        else if (n>=10)
        {
            n=n-10;
            a++;
        }
        else if(n>=5)
        {
            n=n-5;
            a++;
        }
        else if(n>=1)
        {
            n=n-1;
            a++;
        }

    }
    cout<<a;
}
