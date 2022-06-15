#include<bits/stdc++.h>
//#include<cmath.h>
using namespace std;

int maximum(int a[],int n)
{
    int max = a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int minimum(int a[], int n)
{
    int min = a[0];
    for(int i=0; i<n; i++)
    {
        if(min>a[i])
            min = a[i];
    }

    return min;
}

double average(int a[],  n)
{
    double r = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    r = (double)(sum/n);
    return r;
}

int Total(int a[], int n)
{
    int total = 0;
    for(int i=0; i<n; i++)
    {
        total = total + a[i];
    }

    return total;
}



int main()
{
    int a[100],n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the arrays elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int m = maximum(a,n);
    cout<<"Maximum element is : "<<m<<endl;

    int min = minimum(a,n);
    cout<<"Minimum element is : "<<min<<endl;

    double ave = average(a, n);
    cout<<"Average value is : "<<ave<<endl;

    int total = Total(a, n);
    cout<<"Total value is : "<<total<<endl;

    //cout<<"Sine Value is : "<<Sine(a, n)<<endl;
    return 0;
}