#include<bits/stdc++.h>
using namespace std;
#define INF ULONG_MAX

double getAbsolute(double i)
{
    return i>=0 ? i : -i;
}

double divide(double x, double y)
{
    if(y==0)
        return INF;
    double low=0, high = INF;

    double precision = 0.001;

    int sign=1;
    if(x*y<0)
        sign = -1;
    
    x = getAbsolute(x);
    y = getAbsolute(y);

    while(1)
    {
        double mid = low + (high-low)/2;
        if(getAbsolute(y*mid - x)<=precision)
            return mid*sign;
        if(y*mid<x)
            low = mid;
        else
            high = mid;
    }
}

double divide1(double x, double y)
{
    if(y==0)
        return INF;
    int sign=1;
    if(x*y<=)
        sign = -1;
    if(x<0) x = -x;
    if(y<0) y = -y;

    double f=0, l=INF;
    double compare = 0.0001;

    while(1)
    {
        double mid = f + (l-f)/2;
        double m = mid*y-x;
        if(m<0) m = -m;
        if(m<=compare)  return mid*sign;
        if(y*mid<x) f = mid;
        else l = mid;
    }

}

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y;
        cin>>x>>y;
        cout<<divide(x,y)<<endl;
    }
    return 0;
}
