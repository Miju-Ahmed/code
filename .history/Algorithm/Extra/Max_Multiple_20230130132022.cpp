#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,n,temp;    cin>>n;
    string a,b,s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i][0]!=s[j][0])
            {
                temp = (s[i].size())*(s[j].size());
                ans = max(ans, temp);
                if(ans==max)
                {
                    a = s[i];
                    b = s[j];
                }
            }
            else
            {
                
            }
        }
    }

}