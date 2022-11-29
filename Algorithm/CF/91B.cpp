#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    pair<int,int>P[n];
    int res[n];
    for(int i=0; i<n; i++)
    {
        cin>>P[i].first;
        P[i].second = i;
    }

    sort(P, P+n);
    for(int i=0; i<n; i++)
        cout<<"("<<P[i].first<<","<<P[i].second<<") ,";
    cout<<endl;
    int Max = -1;
    for(int i=0; i<n; i++)
    {
        res[P[i].second] = max(0, Max - P[i].second);
        Max = max(Max, P[i].second);
    }

    for(int i=0; i<n; i++)
        cout<<res[i]-1<<" ";
    cout<<endl;
    return 0;
}