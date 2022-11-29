#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    string s;       cin>>s;
    
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {
                cout<<"YES"<<endl;
                cout<<s[i]<<" ";
                return;
            }
            else
            {
                cout<<"NO"<<endl;
                cout<<s[i]<<" ";
                return;
            }
        }
        cout<<s[i]<<" ";
    }
}

int main()
{
    Faster;
    int _=1;      //cin>>_;
    while(_--)  solve();
    
    return 0;
}