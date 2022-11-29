#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int f,l,t=0;
    for(int i=0; i<n-1; i++)
    {
        int c=a[i];
        for(int j=i+1; j<n; j++)
        {
            c+=a[j];
            if(c==s)
            {
                f=i;
                l=j;
                t = 1;
                break;
            }
        }
        if(t==1)
            break;
    }
    cout<<f+1<<" "<<l+1<<endl;
    return 0;
}