#include<bits/stdc++.h>
using namespace std;
/* n is the number
    i is the bit position
*/
int main()
{
    int n,i;    cin>>n>>i;
    cout<<(n&(1<<i))<<endl;
}