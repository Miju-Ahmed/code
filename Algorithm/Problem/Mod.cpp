//xy(mod a) = ((x(mod a)*10) + y(mod a)) mod a
//625 % 5 = (((6 % 5)*10) + (25 % 5)) % 5 = 0

#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a)
{
    int res = 0;
    for(int i=0; i<num.length(); i++)
    {
        res = (res * 10 + (int)num[i] - '0') % a;
    }
    return res;
}

int main()
{
    string num = "12589745664548";
    cout<<mod(num, 10);
    return 0;
}