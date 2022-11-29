#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<(int)(s[n-1]-'a')+1<<endl;
}

int main()
{
    Faster;
    int _;      cin>>_;
    while(_--)  solve();
    
    return 0;
}