#include<bits/stdc++.h>
using namespace std;

#define f(x) cos(x) + sin(x);

int main()
{
    float x,x0,x1,f,f0,f1,e;
    int iteration;

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
        if(f0*f)
    } while (fabs(f)>e);
    
}