#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#include <ctime>

#define incfor(start, end) for (i = start; i < end; i++)
#define incfor2(start, end) for (i = start; i <= end; i++)
#define decfor(start, end) for (i = start; i > end; i--)
#define decfor2(start, end) for (i = start; i >= end; i--)
#define endl "\n"

using namespace std;
main()
{
int n, i = 0, man = 0, untreated = 0, crime = 0, a;
cin >> n;
incfor(i, n)
{
    cin >> a;
    a == -1 &&!man ? untreated++ : a == -1 ? man-- : man += a;
}
cout << untreated << endl;
}
