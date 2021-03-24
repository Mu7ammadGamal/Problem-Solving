#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>
/**https://codeforces.com/problemset/problem/295/A**/
#define endl "\n"
#define limit 100005
typedef long long unsigned llu;
using namespace std;
/*
n   m   k
4   3   6

d[m+2] = d[6] //m+1 to ignore 0 index
a[n+1] = a[5] //n+1 to ignore 0 index
vector<pair<,>> =  lr(4) //m+1 to ignore 0 index
rep[limit]
res[limit]

 ---------------------
a| 0 | 1 | 2 | 3 | 4 |
 ---------------------

l   r   d
---------
1   2   1       q1
2   3   2       q2
3   4   4       q3
  --------------------------------
lr| (0,0) | (1,2) | (2,3) | (3,4)|
  --------------------------------

 -----------------
d| 0 | 1 | 2 | 4 |
 -----------------

x   y
-----
1   2
1   3
2   3
1   2
1   3
2   3

find repeats of each query no. of (q1, q2 ... qm) of (l,r) in ranges [xi:yi] operations [x]++, rep[y+1]--
ÔæÝ ßá ÑäÌ ÇáÞíã Çáá ÌæÇå åÊÒíÏ ßÇã ãÑå È Ïí
   --------------------------------
rep| 0 | 4 | 2 | -2  | -4 | 0 | 0 |-----> limit-1
   --------------------------------
then preSum..
   --------------------------------
rep| 0 | 4 | 6 |  4  |  0 | 0 | 0 |-----> limit-1
   --------------------------------
So,these represent repeats of operations on quires x,y by d
So, d will be repeated as equal these values --> p[i]*=d[i]
 -------------------
d| 0 | 4 | 12 | 16 |
 -------------------

create res[] by to accumulate ranges (l,r) by new d[] values
   -------------------------------------
res| 0 | 4 | 12 |  12  | -12 | -16 | 0 |-----> limit-1
   -------------------------------------
then preSum..
   -------------------------------------
res| 0 | 4 | 16 |  28  | 16  |  0  | 0 |-----> limit-1
   -------------------------------------
Accumulating with a[]
   ---------------------------
a  | 0 | 1 | 2  |  3   |  4  |
   ---------------------------
 +
    -------------------------------------
res| 0 | 4 | 16 |  28  | 16  |  0  | 0 |-----> limit-1
   -------------------------------------
_________________________________________________

   ---------------------------
a  | 0 | 5 | 18 |  31  |  20 |
   ---------------------------
*/
main()
{
llu n,m,k,l,r,x,y;
cin>>n>>m>>k;
llu d[m+1],a[n+1]={0},rep[limit]={0},res[limit]={0};
vector<pair<llu,llu>> lr(m+1);
for(llu i=1;i<=n;i++)
    cin>>a[i];
for(llu i=1;i<=m;i++)
    cin>>lr[i].first>>lr[i].second>>d[i];
while(k--){
    cin>>x>>y;
    rep[x]++;
    rep[y+1]--;
}
for(llu i=1;i<=m;i++){
    rep[i]+=rep[i-1];//preSum
    d[i]*=rep[i];
    res[lr[i].first]+=d[i];
    res[1+lr[i].second]-=d[i];
}
for(llu i=1;i<=n;i++){
    res[i]+=res[i-1];//preSum
    cout<<res[i]+a[i]<<" ";
}
}
