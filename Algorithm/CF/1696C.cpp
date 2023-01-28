#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0)
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define sorta(vec) sort(vec.begin(),vec.end())
#define sortd(vec) sort(vec.begin(),vec.end(),greater<int>())
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>pbds; // find_by_order, order_of_key(0-indexed)
//less , less_equal , greater , greater_equal -> rule for insertion
#define start_execution auto start = std::chrono::high_resolution_clock::now();
#define stop_execution auto stop = std::chrono::high_resolution_clock::now();
#define execution_time auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start); cerr<<"Time taken : "<<((long double)duration.count())/((long double)1e9) <<"s"<<endl; 

//Code starts here
ll int mod=998244353;
int main()
{
    start_execution
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        ll int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>cmpa(n,1);
       
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>a[i];
            while(a[i]%m==0)
            {
                a[i]=a[i]/m;
                cmpa[i]*=m;
            }
        }
        int k;
        cin>>k;
        vector<int>b(k);
        vector<int>cmpb(k,1);
        for(int i=0;i<k;i++)
        {
            int x;
            cin>>b[i];
            while(b[i]%m==0)
            {
                b[i]=b[i]/m;
                cmpb[i]*=m;
            }
        }

        bool ok=true;

        int i=0;
        int j=0;
        
        while(i<n || j<k)
        {
            if(i>=n || j>=k)
            {
                ok=false;
                break;
            }

            if(a[i]!=b[j])
            {
                ok=false;
                break;
            }

            ll mn=min(cmpa[i],cmpb[j]);

            cmpa[i]-=mn;
            cmpb[j]-=mn;

            if(cmpa[i]==0)
            {
                i++;
            }
             if(cmpb[j]==0)
            {
                j++;
            }
        }

        if(ok)
        {
            yes;
        }
        else
        {
            no;
        }

        
    }
    stop_execution
    return 0;
}