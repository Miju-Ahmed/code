#include<bits/stdc++.h>
using namespace std;

string t,p;
vector<int>lps;

void computeLPSArray(int m)
{
    int len = 0;
    lps[0]=0;
    int i=1;
    while(i<m)
    {
        if(p[i]==p[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
                len = lps[len-1];
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}

void KMPSearch()
{
    int m = p.size();
    int n = t.size();
    computeLPSArray(m);

    int i=0,j=0;
    while((n-i)>=(m-j))
    {
        if(p[j]==t[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<"Found pattern at index "<<i-j<<
            j = lps[j-1];
        }
        else if(i<n && p[j]!=t[i])
        {
            if(j!=0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}

int main()
{
    cin>>t>>p;
    KMPSearch();
    return 0;
}

