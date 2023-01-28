#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;  //Ascending order
    set<int, greater<int> > s1; //Descending order
    set<int>::iterator it;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        s.insert(x);
        s1.insert(x);
    }

    cout<<s.max_size()<<endl;

    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    for(auto v: s1) cout<<v<<" ";
    cout<<endl;

    if(s.empty())   cout<<"Empty"<<endl;
    else    cout<<"Not Empty"<<endl;
    

}