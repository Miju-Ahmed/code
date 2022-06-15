#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<r; i++)
    {
        if(i==0||i==r-1)
        {
            for(int j=0; j<c; j++)
                cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=1; j<c-1; j++)
                cout<<"  ";
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}