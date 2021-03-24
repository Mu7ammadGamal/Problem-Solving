#include<iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
#include<vector>
#include<iterator>
#include<ctime>

#define incfor(start,end) for(int i=start;i<end;i++)
#define incfor2(start,end) for(int i=start;i<=end;i++)
#define decfor(start,end) for(int i=start;i>end;i--)
#define decfor2(start,end) for(int i=start;i>=end;i--)

#define endl "\n"

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
