#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    char s[101];
    cin>>s;
    int l = strlen(s);
    sort(s, s+l);
    int c=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }
    if(c%2==0)
        cout<<"CHAT WIHT HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}