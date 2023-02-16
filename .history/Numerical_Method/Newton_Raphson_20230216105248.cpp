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
        a =rand()%10;

        while(true)
        {
            douv
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