#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        int n2 = n/2, n3 = n/3;

        if(n%2 ==0)
        {
            int nn = ((n/2)-(n/3));
            cout<<nn*2 + n3*4 + n<<endl;
        }
        else
        {
            int nn = ((n/2)-(n/3));
            cout<<nn*2+n3*4+n<<endl;
        }
    }
    return 0;
}