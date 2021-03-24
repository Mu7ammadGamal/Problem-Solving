#include<iostream>
#include<cstdlib>
#include<string>
#include <algorithm>
#include<vector>
#include<iterator>
#include<numeric>
#include<ctime>

#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)

#define endl "\n"

using namespace std;

main()
{
unsigned short n,k,j,a;
vector<int> res(101,0);
cin>>n>>k;
int i=0;
incfor(i,n)
{
  cin>>a;
  res[a]++;
  if(k-1==i)
    j=a;
}
j!=0?cout<<accumulate(res.begin()+j,res.end(),0)<<endl:cout<<accumulate(res.begin()+1,res.end(),0)<<endl;
}
