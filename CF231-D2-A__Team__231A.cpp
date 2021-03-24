#include<iostream>
using namespace std;

main()
{
short int n,p,v,t,ans=0;
cin>>n;
while(n--)
{
   cin>>p>>v>>t;
    if(p+v+t>=2)
        ans++;
}
cout<<ans<<endl;
}

