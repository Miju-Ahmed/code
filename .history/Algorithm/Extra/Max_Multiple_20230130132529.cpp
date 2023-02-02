#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0,n,temp;    cin>>n;
    string s[n];    string a,b;
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int t=0;
            if(s[i][0]!=s[j][0])
            {
                temp = (s[i].size())*(s[j].size());
                ans = max(ans, temp);
                if(ans==temp)
                {
                    a = s[i];
                    b = s[j];
                }
            }
            else
            {
                for(int k=0; k<s[i].size(); i++)
                {
                    if(s[i][k]==s[j][k])
                    {
                        t++;
                    }
                    else
                        break;
                }
                temp = (s[i].size()-t)*(s[j].size()-t);
                ans = max(ans, temp);
                if(ans==temp)
                {
                    a = s[i];
                    b = s[j];
                }

            }
        }
    }
    cout<<ans<<e<<a<" "<<b<<endl;
    return 0;

}