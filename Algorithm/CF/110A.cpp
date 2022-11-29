#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    string s;
    cin>>s;
    int p=0;
    for(int i=0; i<s.size(); i++)
    {
        char a=(char)s[i];
        if(a=='7'||a=='4')
        {
            p++;
        }
    }
    if(p==4||p==7)    cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;
    return 0;
}