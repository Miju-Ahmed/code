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
    long long k,l;
    int p=0,y=0;
    cin>>k>>l;
    for(int i=0; i<32; i++)
    {
        if(pow(k,i)==l)
        {
            p = i;
            y = 1;
            break;
        }
    }
    if(y==1)
        cout<<"YES"<<endl<<(p-1)<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}