#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char a[2][2];
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            cin>>a[i][j];
    
    int b[26]={0};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            b[a[i][j]-'a']++;
        }
    }



    int n=0;
    for(int i=0; i<26; i++)
    {
        if(b[i]!=0)
        {
            n++;
        }
    }
    if(n==4)
        cout<<"3"<<endl;
    else if(n==1)
        cout<<"0"<<endl;
    else if(n==3)
        cout<<"2"<<endl;
    else
    {
        for(int i=0; i<26; i++)
        {
            if(b[i]==3)
            {
                cout<<"1"<<endl;
                break;
            }
            else if(b[i]==2)
            {
                 cout<<"1"<<endl;
                 break;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}