#include<bits/stdc++.h>
using namespace std;
class Newton
{
private:
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }
    double derivativeFunction(double x)
    {
        return 3 * x * x + 2 * x;
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
            if(fabs(a)<=pre)
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