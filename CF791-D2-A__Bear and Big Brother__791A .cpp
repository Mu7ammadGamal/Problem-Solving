#include<iostream>
#include<string>
#define endl "\n"
using namespace std;

short int a,b,years=0;
main()
{

    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        ++years;
    }
    cout<<years<<endl;
}
