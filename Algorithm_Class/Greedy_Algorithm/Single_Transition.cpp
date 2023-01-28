#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the product number: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the product value: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c = -789878;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int t = v[j]-v[i];
            if(c<t)
                c=t;
        }
    }
    cout<<"Maximum profit is "<<c<<endl;
    return 0;
}