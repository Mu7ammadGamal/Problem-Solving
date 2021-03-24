#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cctype>
#include<string>
#include <algorithm>
#include<vector>
#include<iterator>
#include<ctime>


#define incfor(start,end) for(i=start;i<end;i++)
#define incfor2(start,end) for(i=start;i<=end;i++)
#define decfor(start,end) for(i=start;i>end;i--)
#define decfor2(start,end) for(i=start;i>=end;i--)

#define endl "\n"

// a b c d e f g h i j k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
// from a to z
// d1 = |z-a| = 25 steps
// d2 = total - d1 = 1 step
// mD = min(d1,d2) = 1 step
// currPos @ z = 25
// from z to v
// d1 = |v-z| = 4 steps
// d2 = total - d1 = 22 step
// mD = min(d1,d2) = 4 step
// currPos @ v = 21

using namespace std;
main()
{
short i=0,res=0,currPos =0;
string s;
cin>>s;
incfor(0,s.size())
{
  res+=min(26-abs(s[i]-'a'-currPos),abs(s[i]-'a'-currPos));
  currPos = s[i]-'a';
}
cout<<res<<endl;
}
