#include<bits/stdc++.h>
using namespace std;

string s[10];
int l;

void bs(int n)
{
    string x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]>s[i])
            {
                x = s[j];
                s[j] = s[i];
                s[i] = x;
            }
        }
    }
}

void ins(string a)
{
    for(int i=9; i>2; i--)
        s[i] = s[i-1];
    s[2] = a;
}

void del(int n, string a)
{
    for(int i=0; i<n; i++)
    {
        if(s[i]==a)
        {
            for(int j=i; j<n; j++)
                s[j] = s[j+1];
            break;
        }
    }
}

void Bin_Ser(string a)
{
    int b=0, e=7, m, p=0;
    while(b<=e)
    {
        m = b + (e-b)/2;
        if(s[m]>a)
            e = m-1;
        else if(s[m]<a)
            b = m + 1;
        else
        {
            p=1;
            break;
        }
    }

    if(p==1)
        cout<<a<<" is found at index "<<m-1<<endl;
    else
        cout<<a<<" is not found in this array"<<endl;
}

void print(int n)
{
    for(int i=0;i <n; i++)
        cout<<s[i]<<" ";
    cout<<endl;
}

int main()
{
    for(int i=0; i<8; i++)
        cin>>s[i];

    print(8);
    ins("Murad");
    print(9);
    del(9, "Murad");
    print(8);
    bs(8);
    print(8);
    Bin_Ser("Nishat");
    return 0;

}