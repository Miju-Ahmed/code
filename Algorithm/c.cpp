#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    vector<string> str[n];
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        str[i].push_back(s);
    }
    cin>>q;
    vector<string>que[q];
    for(int i=0; i<q; i++)
    {
        string s;
        cin>>s;
        que[i].push_back(s);
    }
    int count = 0;
    for(int i=0; i<q; i++)
    {
        count = 0;
        for(int j=0; j<n; j++)
        {
            if(que[i]==str[j])
            {
                count = count + 1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}