#include<iostream>
using namespace std;

main()
{
short int n,h,a,ans=0;
cin>>n>>h;
for(short int i = 1;i<=n;i++)
{
    cin>>a;
    a<=h?ans++:ans+=2;
}
cout<<ans<<endl;
}
