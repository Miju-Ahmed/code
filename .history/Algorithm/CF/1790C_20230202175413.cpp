#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

//const ll inf=1e18+8;
//int gcd(int a, int b){return b==0?a:gcd(b,a%b);}
//int prime(int x){for(int i=2; i<=sqrt(x); i++){if(x%i==0)return -1;}return 1;}
//ll fact(int n){if(n>1) return n*fact(n-1); else return 1;}

/*-----------------------------------solve()----------------------------------------------*/
void solve()
{
    int n;  cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            int x;  cin>>x;
            v.push_back(x);
        }
    }
    cout<<"Elements are: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                //cout<<"Now erase : ";
                //cout<<v[i]<<endl;;
                v.erase(v.begin()+j);
            }
            
        }
    }
    cout<<endl;
    cout<<"The values are: ";
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    v.clear();
}

/*-------------------------------------main()---------------------------------------------*/
int main()
{
    Faster;
    int _=1;      cin>>_;
    while(_--)  solve();
    
    return 0;
}
