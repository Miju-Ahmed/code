#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<string, int> f;
    vector<string>v[3];
    for(int i=0; i<3; i++)
    {
        v[i].resize(n);
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
            f[v[i][j]]++;
        }
    }

    int p[3] = {0};
    for(int i=0; i<3; i++)
    {
        v[i].resize(n);
        for(int j=0; j<n; j++)
        {
            if(f[v[i][j]]==1)
                p[i] += 3;
            else if(f[v[i][j]]==2)
                p[i] += 1;
        }
    }

    cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }

    return 0;
    
}