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

bool check(int x){return x==1;}
main()
{
short n;
char c;
cin>>n;
vector<int> res(26);
incfor(0,n)
{
  cin>>c;
  res[c-'a']++;
}
*max_element(res.begin(),res.end())>1?cout<<"Yes"<<endl:cout<<"No"<<endl;
}
