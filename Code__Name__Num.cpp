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
short i=0,res=0,currPos =0;
string s;
cin>>s;
incfor(0,s.size())
{
  res+=min(26-abs(s[i]-'a'-currPos),abs(s[i]-'a'-currPos));
  currPos = s[i]-'a';
}
cout<<res<<endl;
}
