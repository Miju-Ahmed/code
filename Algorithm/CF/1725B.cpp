#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, d;
    cin>>n>>d;
    ll p[n];
    for(int i=0; i<n; i++)
        cin>>p[i];

    sort(p, p+n);
    ll c = 0, m, k;
    int i=n-1;
    int mem = 0;
    for(i = n-1; i>=0; i--)
    {
        m = p[i];
        k = m;
        if(m>d)
        {
            c++;
            p[i] = -1;
        }
        else if(p[i]!=-1)
        {
            for(int j=0; j<i; j++)
            {
                if(p[j]!=-1)
                {
                    if(m+k>d)
                    {
                        c = c+ 1;
                        p[i] =  -1;
                        p[j] = -1;
                        break;
                    }
                    else
                    {
                        k = m+k;
                        mem = mem+1;
                        if(mem>5)
                            break;
                        p[j] = -1;
                        p[i] = -1;
                    }
                }
                break;
            }
        }
        break;
        i--;
    }
    cout<<c<<endl;
    return 0;
}