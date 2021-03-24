#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>


#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)
#define endl "\n"

using namespace std;
main()
{
short n;
long long x,a,dis=0;
char c;
cin>>n>>x;
while(n--)
{
    cin>>c>>a;
    c=='+'?x+=a:x-a>=0?x-=a:dis++;
}
cout<<x<<" "<<dis<<endl;
}
