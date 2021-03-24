#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<ctime>
/**https://codeforces.com/problemset/problem/287/A**/
#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)
#define endl "\n"

/*
idea: use preSum of matrix to get matrix of how many square are full of '#' or any element
then select the square that its index i*j=4 (given square 2*2)
then try to get its weight only by subtracting whole area from remaining parts from it

---------
|#|#|#|#|
---------
| |#| | |
---------
|#|#|#|#|
---------
| | | | |
---------

let #==1
---------
|1|1|1|1|
---------
|0|1|0|0|
---------
|1|1|1|1|
---------
|0|0|0|0|
---------

preSum..
---------                                       ---------
|1|2|3|4|                                       |#|#|#|#|
---------                                       ---------
|1|3|4|5 --> until me sum of my before '#' = 5# | |#| |>| me not but 5# above
---------                                       ---------
|2|5|7|9 --> until me sum of my before '#' = 9# |#|#|#|>| me yes and 8# above
---------                                       ---------
|2|5|7|9|                                       | | | | |
---------                                       ---------
each square refer to how many '#' appeared in its square to above
*/
using namespace std;
main()
{
int a[5][5]={0},res=0,full;
char c;
for(int i=1;i<5;i++)
    for(int j=1;j<5;j++){
      cin>>c;
      a[i][j]=(c=='#');

}
//row preSum
for(int i=1;i<5;i++)
    for(int j=1;j<5;j++)
        a[i][j]+=a[i][j-1];
//col preSum
for(int i=1;i<5;i++)
    for(int j=1;j<5;j++)
        a[i][j]+=a[i-1][j];

for(int i=1;i<5;i++)
    for(int j=1;j<5;j++)
    {
        full = a[i][j]-a[i-2][j]-a[i][j-2]+a[i-2][j-2];
        if(i*j>=4 && (full>=3 || !full || full==1))
        {
            res++;
            break;
        }
    }
res?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
