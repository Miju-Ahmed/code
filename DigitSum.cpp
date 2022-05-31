#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s,s1;
    int k;
    cin>>s;
    cin>>k;
    int len = s.size();
    while (len<=k)
    {
        int p=0;
        for(int i=0; i<s.length(); i = i+k)
        {
            int sum=0;
            for(int j=i; j<k; j++)
            {
                sum+=(int)(s[j]);
            }
            cout<<"sum: "<<sum<<endl;
            s1[p] = sum;
            
            p++;
        }
        s = s1;
        len = s.size();
    }
    
    cout<<s<<endl;
}

int main()
{
    solve();
    return 0;
}