#include<iostream>
#include<string>
using namespace std;

main()
{
unsigned int n,A=0,D=0;
string str,res[3]={"Friendship","Anton","Danik"};
cin>>n;
cin>>str;

for(unsigned int i=0;i<n;i++)
{
    if(str[i]=='A')
        A++;
    /*else if(str[i]=='D')
        D++;*/
}

D=n-A;
if (D == A)
    cout<<"Friendship"<<endl;
else if (A > D)
    cout<<"Anton"<<endl;
else
    cout<<"Danik"<<endl;
}

