#include<bits/stdc++.h>
using namespace std;

#define f(x) pow(x,3)-x-2

class Bisection
{
private:
    /* data */
public:
    void biSection()
    {
        float x,x0,x1,f,f0,f1,e;
        cout<<"Enter the first guess value: ";  cin>>x0;
        cout<<"Enter the second guess vaues: "; cin>>x1;
        cout<<"Enter the tolerable error: ";    cin>>e;
        int step=1;
        f0 = f(x0);   f1 = f(x1);
        while(f0*f1<0.0)
        {
            cout<<"Incorrect guess values. Enter correct guess values."<<endl;
            cout<<"Enter the first value: ";    cin>>x0;
            cout<<"Enter the second vlue: ";    cin>>x1;
            f0 = f(x0); f1 = f(x1);
        }

        do
        {
           x = (x0+x1)/2;
           f = f(x);
           cout<<"Iteration--"<<step<<":\t x = "<<setw(10)<<x<<" and f(x) = "<<setw(10)<<f(x);
           cout<<endl;
           if(f0*f<0)   x1 = x;
           else x0 = x;
           step++;
        } while (fabs(f)>e);
        cout<<endl;
        cout<<"Root is : "<<x<<endl;
    }
};

int main()
{
    Bisection Obj;
    Obj.biSection
}
