#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
            c++;
        else
            break;
    }
    int another = s.size()-c;

    if(c>another)
    {
        cout<<s.size()<<endl;
    }
    else if(c==another)
        cout<<(c+another-1)<<endl;
    else
        cout<<(c*2-1)<<endl;
    return 0;
}