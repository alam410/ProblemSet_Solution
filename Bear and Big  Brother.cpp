#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bob,limak;
    int counter=0;
    cin>>limak;
    cin>>bob;




while(limak<=bob)

{
    bob=bob*2;
    limak=limak*3;
    counter++;
}

    cout<<counter;
}
