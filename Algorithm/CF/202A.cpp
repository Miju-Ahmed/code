#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    string s;
    cin>>s;
    int l = s.size();
    sort(s.begin(),s.end());
    for(int i=l-1; i>=0; i--)
    {
        if(s[l-1]==s[i])
            cout<<s[l-1];
        else
            break;
    }
    cout<<endl;
    return 0;
}