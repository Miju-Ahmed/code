#include<bits/stdc++.h>
using namespace std;
string ss;
int ans=0;

string D_to_26(int n)
{
    int t, r;
    char c;
    while(n>=26)
    {
        t = n%26;
        if(t==0)
        {
            ss.push_back('Z');
        }
        else
        {
            c = (char)(t + 'A'-1);
            ss.push_back(c);
        }
        n/=26;
    }
    if(n%26==0)
        ss.push_back('Z');
    else
    {
        c = (char)(n%26 + 'A'-1);
        ss.push_back(c);
    }   
    reverse(ss.begin(), ss.end());
    
    return ss;
}

int L_to_D(string c)
{
    int r=0;
    int n;
    n = c.size();
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        if(c[i]=='Z')
            continue;
        else
            r += pow(26, j)*(int)(c[i]-64);
    }
    ans = r;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        string s;
        cin>>s;
        vector<string>a;
        vector<string>b;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                string s1;
                while(s[i]>='A' && s[i]<='Z')
                {
                    s1 += s[i];
                    i++;
                }
                a.push_back(s1);
            }
            else
            {
                string s1;
                while(s[i]>='0'&&s[i]<='9')
                {
                    s1 += s[i];
                    i++;
                }
                b.push_back(s1);
            }
            i--;
        }
        if(a.size()>1 && b.size()>1)
        {
            string ans1, ans2;
            ans1 = b[1];
            ans2 = b[0];
            int x = stoi(ans1);
            D_to_26(x);
            cout<<ss<<ans2<<endl;
        }   
        else
        {
            string ans1, ans2;
            ans1 = a[0];
            ans2 = b[0];
            L_to_D(ans1);
            cout<<'R'<<ans2<<'C'<<ans<<endl;
        }
        n--;
    }

    return 0;
}