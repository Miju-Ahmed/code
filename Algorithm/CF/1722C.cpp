#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    map<string,int> freq;
    vector<string>a[3];
    for(int i=0; i<3; i++)
    {
        a[i].resize(n);
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            freq[a[i][j]]++;
        }
    }

    int p[3]={0};
    for(int i=0; i<3; i++)
    {
        a[i].resize(n);
        for(int j=0; j<n; j++)
        {
            if(freq[a[i][j]]==1)
            {
                p[i] += 3;
            }
            else if(freq[a[i][j]]==2)
            {
                p[i]+=1;
            }
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
    while(t--)
        solve();
    return 0;
}