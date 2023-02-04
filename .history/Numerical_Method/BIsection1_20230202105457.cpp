#include<bits/stdc++.h>
using namespace std;

#define f(x) 4*pow(x)

int main()
{
    float x,x0,x1,f,f0,f1,e;
    int step=1;

    cout<<"Guess the first value: ";    cin>>x0;
    cout<<"Guess the second value: ";   cin>>x1;
    cout<<"Guess the tolerable error: "; cin>>e;
    f0 = f(x0);     f1 = f(x1);
    while(f0*f1>0.0)
    {
        cout<<"Incorrect guesses value. Enter the correct guess value."<<endl;
        cout<<"Guess the first value: ";    cin>>x0;
        cout<<"Guess the second value: ";   cin>>x1;
        f0 = f(x0); f1 = f(x1);
    }

    do
    {
        x = (x0+x1)/2;
        f = f(x);
        cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x<<" and f(x) = "<< setw(10)<< f(x); cout<<endl;
        if(f0*f<0) x1 = x;
        else    x0 = x;
        step++;
    } while (fabs(f)>e);
    cout<<endl;
    cout<<"Root is: "<<x<<endl;
}