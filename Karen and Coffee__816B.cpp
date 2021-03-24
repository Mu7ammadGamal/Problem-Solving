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

/*
ranges: {1,4}{3,6} ==> a[l] = 1, a[r+1] = -1 of {l,r}
  0   1   2   3   4    5   6   7
-----------------------------------
  0 | 1 | 0 | 1 | 0 | -1 | 0 | -1 |
-----------------------------------
accumulating..(preSum ==> a[i]+=a[i-1]) will give no. of appearance of each num in given ranges
  0   1   2   3   4   5   6   7
---------------------------------
  0 | 1 | 1 | 2 | 2 | 1 | 1 | 0 |
---------------------------------
appearance(2) == a[2] = 1 in {1,4}
appearance(3) == a[3] = 2 in {1,4}{3,6}
appearance(3) == a[4] = 1 in {3,6}
*/

using namespace std;
main()
{
long long n,k,q,l,r,i,res=0,a[200009]={0};
cin>>n>>k>>q;
while(n--)
{
    cin>>l>>r;
    a[l]++;
    a[r+1]--;
}
for(long long i=1;i<200009;i++)
    a[i]+=a[i-1];
for(long long i=1;i<200009;i++)
    a[i]=(a[i]>=k);
for(long long i=1;i<200009;i++)
    a[i]+=a[i-1];
while(q--)
{
    cin>>l>>r;
    cout<<a[r]-a[l-1]<<endl;
}
}
