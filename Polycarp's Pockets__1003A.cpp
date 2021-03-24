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
unsigned short n,a,maxa=0;
cin>>n;
vector<int> res(101);
incfor(0,n)
{
  cin>>a;
  res[a]++;
  if(a>maxa)
    maxa=a;
}
res.resize(maxa+1);
res.shrink_to_fit();
cout<<*max_element(res.begin(),res.end())<<endl;
}
