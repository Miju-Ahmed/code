#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, s=0,c=0;
    cout<<"Entet the time number and limit: ";
    cin>>n>>t;
    int a[n];
    cout<<"Entet time: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    sort(a, a+n);
    s=a[0];
    for(int i=1; i<n; i++)
    {
        if(s<=t)
        {
            c++;
            s += a[i];
        }
        else
            break;
    }

    cout<<"Number of things : "<<c<<endl;
    return 0;
}