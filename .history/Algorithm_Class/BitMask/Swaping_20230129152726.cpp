#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<a<<" "<<b<<endl;
}