#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(str[0] == str[1]){
            cout << str[0] << str[0] << endl;
            continue;
        }
        int ptr = 0;
        while(ptr < n-1 && str[ptr+1] <= str[ptr])
            ptr++;
        str = str.substr(0,ptr+1);
        cout << str;
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;

    if(s[0]==s[1])
    {
        cout<<s[0]<<s[0]<<endl;
        return;
    }

    int c=0;
    while(c<=n-1&&s[c])
}