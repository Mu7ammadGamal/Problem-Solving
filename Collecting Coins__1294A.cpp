#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>
/**https://codeforces.com/problemset/problem/1294/A**/
#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)
#define endl "\n"
typedef long long ll;

using namespace std;

main()
{
short t;
ll n,x,a[3]={0};
cin>>t;
short res[t];
for(int i=0;i<t;i++)
{
cin>>a[0]>>a[1]>>a[2]>>n;
sort(a,a+3);
x = n-(2*a[2]-(a[0]+a[1]));
res[i]=(x>=0 && x%3==0);
}
for(int i=0;i<t;i++)
    res[i]?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

