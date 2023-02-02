#include<bits/stdc++.h>
using namespace std;

int h[11];

int Hashing(int x)
{
    int n,r,a;
    cout<<"Enter elemensts number: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a;
        r = a%11;
        if(h[r]==-1)
            h[r] = a;
        else
        {
            for(int i=0; i<11; i++)
            {
                r = (r+3)%11;
                if(h[r]==-1)
                {
                    h[r]=a;
                    break;
                }
            }
        }
    }
    cout<<"The elements are: ";
    for(int i=0; i<11; i++)
    {
        if(h[i]!=-1)
        {
            cout<<h[i]<<" ";
        }
    }

    cout<<endl;

    for(int i=0; i<11; i++)
    {
        if(h[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    int x;
    for(int i=0;i <11; i++)
        h[i]=-1;

    x = Hashing(20);
    if(x!=-1)
        cout<<"Find";
    else
        cout<<"Not find"<<endl;
    return 0;
}