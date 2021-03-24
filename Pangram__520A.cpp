#include<iostream>
#include<cstdlib>
#include<cctype>
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

bool check(int x){return x==0;}
main()
{
short n;
char c;
cin>>n;
vector<int> res(26,0);
incfor(0,n)
{
  cin>>c;
  c=tolower(c);
  res[c-'a'] = 1;
}
*find_if(res.begin(),res.end(),check)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
