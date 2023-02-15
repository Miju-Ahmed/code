#include<bits/stdc++.h>
using namespace std;

#define f(x) pow(x,3)-x-2

class Bisection
{
private:
    /* data */
public:

    float x,x0,x1,f,f0,f1,e,step=1;
    Bisection()
    {
        for(int i=1; i<=2; i++)
        {
            for(int j=1; j<=2; j++)
            {
                if(f(i)*f(j)<0)
                {
                    x0=i;
                    x1=j;
                    break;
                }
            }
        }
    }
    void biSection()
    {
        cout<<"Entet the tolerable value: ";    cin>>e;
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
    Obj.biSection();
    return 0;
}
