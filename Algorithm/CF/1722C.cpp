#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string a[3];
    string s;
    int b[3] = {0};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][n];
    }


        for(int j=0; j<n; j++)
        {
            if(a[0]==a[1]&&a[i]==a[2])
                b[0] += 0;
            else if(a[0]!=a[1]&&a[0]!=a[2])
                b[0]+= 3;
            else
                b[0]+= 1;
        }
    for(int j=0; j<n; j++)
        {
            if(a[1]==a[0]&&a[1]==a[2])
                b[1] += 0;
            else if(a[1]!=a[0]&&a[1]!=a[2])
                b[1]+= 3;
            else
                b[1]+= 1;
        }

        for(int j=0; j<n; j++)
        {
            if(a[2]==a[0]&&a[1]==a[1])
                b[2] += 0;
            else if(a[2]!=a[0]&&a[2]!=a[1])
                b[2]+= 3;
            else
                b[2]+= 1;
        }

        for(int i=0; i<3; i++)
            cout<<b[i]<<enld;
    // string f[n], s[n], t[n];
    // for(int i=0; i<n; i++)
    //     cin>>f[i];
    // for(int i=0; i<n; i++)
    //     cin>>s[i];
    // for(int i=0; t<n; i++)
    //     cin>>f[i];
    // string a;
    // int a[3] = {0};
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         if(strcmp(f[i],s[i])==true&&strcmp(f[i],t[i])==true)
    //             a[i] += 3;
    //         else if(strcmp(f[i],s[i])==true&&strcmp(f[i],t[i])==true)
    //             a[i] += 0;
    //         else
    //             a[i] += 1;
    //     }
    // }

    // for(int i=0; i<3; i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}