#include<iostream>
#include<cmath>
using namespace std;
main()
{
    short int i,j,m,ans;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
           cin>>m;
           if(m)
            ans=abs(i-3)+abs(j-3);
        }
    }
cout<<ans<<endl;
}
//https://codeforces.com/contest/263/problem/A
