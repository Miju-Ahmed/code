#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    m.insert(make_pair("Nishat", 01));
    m.insert(make_pair("Miju", 95));
    m.insert(make_pair("Fatima", 02));
    m.insert(make_pair("Likha", 45));

    cout<<m["Nishat"]<<endl;
    it = m.begin();
    cout<<it->first<<" "<<it->second<<endl;
    ++it;
    cout<<it->first<<" "<<it->second<<endl;
    ++it;
    cout<<it->first<<" "<<it->second<<endl;
    ++it;
    cout<<it->first<<" "<<it->second<<endl;
    return 0;
}