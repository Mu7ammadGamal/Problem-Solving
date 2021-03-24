#include<iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
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
unsigned short n,res=0;
string s;
cin>>n>>s;
int i=1;
incfor(i,n)
{
  if(s[i]==s[i-1])
    res++;
}
cout<<res<<endl;
}
