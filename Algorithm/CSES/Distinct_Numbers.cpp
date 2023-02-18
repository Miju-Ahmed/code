#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st;
    int n;  cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
}