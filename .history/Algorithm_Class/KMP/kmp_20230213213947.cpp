#include<bits/stdc++.h>
using namespace std;

string t,p;
vector<int>lps;

void computeLPSArray(int m)
{

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
    }
}

int main()
{
    cin>>t>>p;
    KMPSearch();
    return 0;
}

