#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(2);
    v.push_back(89);
    v.push_back(87);
    v.push_back(45);
    v.push_back(75);
    v.push_back(82);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+4, v.end());
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}