#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>
/**https://codeforces.com/contest/141/problem/A**/
#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)
#define endl "\n"

//search some letters in
using namespace std;
main()
{
vector<int> v(26,0);
string s1,s2,s3;
cin>>s1>>s2>>s3;
s1+=s2+s3;
int i=0,res=0;
incfor(0,s1.size())
    (i<(s1.size()-s3.size()))?v[s1[i]-'A']++:v[s1[i]-'A']--;
auto mm = minmax_element(v.begin(),v.end());
!*mm.first&&!*mm.second?cout<<"YES"<<endl:cout<<"NO"<<endl;
//if s1+s2 = s3 equal min and max = 0 ==> Balanced (to be added to be removed)
}
