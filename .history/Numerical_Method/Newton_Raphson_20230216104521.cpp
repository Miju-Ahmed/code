#include<bits/stdc++.h>
using namespace std;

#define f(x) 3*x - cos(x) - 1
#define g(x) 3+sin(x)

class Newton
{
private:
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }
    double derivativeFunction(double x)
    {
        return  * x * x + 6 * x;
    }

public:
    void NewtonRaphson()
    {
        double pre=0.001;
        double a;
        while(true)
        {
            a = -9+rand()%10;
            if(derivativeFunction(a)!=0)
                break;
        }

        while(true)
        {
            a = a - (function(a)/derivativeFunction(a));
            if(a<=pre)
            {
                cout<<a<<endl;
                break;
            }
        }
    }
     
};

int main()
{
    Newton Obj;
    Obj.NewtonRaphson();
    return 0;
}