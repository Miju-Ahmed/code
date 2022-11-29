/*To solve this task, let's describe what is needed more formally. 
We should answer whether is number l some positive degree of number k or no. 
To answer this question we can proceed in 2 ways:
1) Using 64 bit data type, we can find minimal degree h of number k, such that kh ≥ l. If kh = l, 
then the answer is YES, and number of articles is equal to h - 1. Otherwise, the answer is NO.
2) We will divide l by k, until k divides l and l ≠ 1. If l = 1, then the answer - YES 
and number of articles is equal to numberOfDivisions - 1, and the answer is NO otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,importamce(-1);
    cin>>k>>l;
    while(l%k == 0)
    {
        l/=k;
        importamce += 1;
    }

    if(importamce >=0 && l==1)
        cout<<"YES"<<endl<<importamce<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}