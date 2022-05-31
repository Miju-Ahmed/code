#include<bits/stdc++.h>
using namespace std;

int Binarysearch(string a[], int f, int l, string x)
{
    while (l>=f)
    {
        int m = f + (l-f)/2;
        int res = -1100;
        if(x==a[m])
            res = 0;
        if(res==0)
            return m;
        if(x>a[m])
            f = m+1;
        else
            l = m - 1;
    }

    return -1;
    

}

int main()
{
    string a[50];
    int n;
    string name;
    cout<<"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Eneter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int pos = Binarysearch(a,0,n-1,name);
    if(pos==-1)
        cout<<"Not any elements found."<<endl;
    else
        cout<<"Elements founds at index : "<<pos<<endl;

    return 0;
}