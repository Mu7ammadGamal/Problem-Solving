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
#define llu long long unsigned


using namespace std;
main()
{
double n,m,a;;
cin>>n>>m>>a;
cout<<(llu)(ceil(n/a)*ceil(m/a));
}
