#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;
    int *arr = new int[n];
    int res = 0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        res ^= arr[i];
    }

    int tempRes = res, index=0;
    while(tempRes>0)
    {
        if(tempRes&1)
        {
            break;
        }
        index++;
        tempRes 
    }
}