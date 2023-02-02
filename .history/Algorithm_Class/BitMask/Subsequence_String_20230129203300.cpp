#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;   cin>>s;
    int SubSequence = (2<<(s.size())-1);
    cout<<SubSequence<<endl;
    for(int i=0; i<SubSequence; i++)
    {
        int temp = i, j=0;
        while(temp>0)
        {
            if(temp&1)
                cout<<s[j];
            j++;
            temp = temp>>1;
        }
    }
    cout<<endl;
}