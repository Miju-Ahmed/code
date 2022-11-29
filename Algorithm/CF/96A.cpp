#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    string s;
    cin>>s;
    int c=0;
    int p=0;
    int l = s.size();

    if(l<7)
        cout<<"NO"<<endl;
    else
    {
        for(int i=0; i<l; i++)
        {
            if(s[i]=='0')
            {
                for(int j=i+1; j<i+7; j++)
                {
                    if(s[j]!='0')
                    {
                        i = j;
                        c=1;
                        break;
                    }
                    p++;
                    if(p==6)
                    {
                        c=0;
                        break;
                    }
                }
            }
            else
            {
                for(int j=i+1; j<i+7; j++)
                {
                    if(s[j]!='1')
                    {
                        i = j;
                        c=1;
                        break;
                    }
                    p++;
                    if(p==6)
                    {
                        c=0;
                        break;
                    }
                }
            }
            if(c==0)
                break;
        }
        if(c==0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    
    return 0;
}