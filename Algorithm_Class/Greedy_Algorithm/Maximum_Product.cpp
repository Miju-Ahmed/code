#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of product: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the cost of product: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int c;
    cout<<"Enter the main balance: ";
    cin>>c;

    sort(v.begin(), v.end());
    
    int count=0,sum=v[0];
    for(int i=1; i<v.size(); i++)
    {
        if(sum<=c)
        {
            count++;
            sum += v[i];
        }
        else
            break;
    }

    cout<<"She can be bought: "<<count<<endl;
    return 0;
}