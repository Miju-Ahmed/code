#include<bits/stdc++.h>
using namespace std;

#define f(x) cos(x)-x*exp(x);

void solve()
{
    float x0,x1,x,f0,f1,f,e;
    int step=1;
    cout<<setprecision(6)<<fixed;

    up:
    cout<<"Enter first guess: ";
    cin>>x0;
    cout<<"Enter secosn guess: ";
    cin>>x1;
    cout<<"Enter tolerable error: ";
    cin>>e;
    
    f0 = f(x0);
    f1 = f(x1);

    if(f0*f1>0.0)
    {
        cout<<"Incorrect Initial guesses."<<endl;
        goto up;
    }
    cout<<endl<<"************"<<endl;
    cout<<"Bisection Method"<<endl;
    cout<<"************"<<endl;

    do
    {
        x = (x0+x1)/2;
        f = f(x);
        cout<<"Iteration-"<<step<<":\t x = "<<setw(10)<<x<<" and f(x):
    }
}

int main()
{
    int _=1;    //cin>>_;
    while(_--)  solve();
}