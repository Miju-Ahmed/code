#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[]={1,5,6,8,9,12,15,17,46,59};
    int n = sizeof(a)/sizeof(a[0]);
    if(binary_search(a, a+10, 2))
        cout<<"Found 2"<<endl;
    else
        cout<<"Not found 2"<<endl;
    if(binary_search(a, a+n, 15))
        cout<<"Found 15"<<endl;
    else
        cout<<"Not found 15"<<endl;
    return 0;
}