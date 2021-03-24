#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>
/**https://codeforces.com/problemset/problem/816/B**/
#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)
#define endl "\n"

using namespace std;
main()
{
int a[3][3]={0};
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      cin>>a[i][j];
//row preSum
for(int i=1;i<3;i++)
    for(int j=1;j<3;j++)
        a[i][j]+=a[i][j-1];
//col preSum
for(int i=1;i<3;i++)
    for(int j=1;j<3;j++)
        a[i][j]+=a[i-1][j];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;}



}
