#include<bits/stdc++.h>
using namespace std;

#define f(x) 3*x - cos(x) - 1
#define g(x) 3+sin(x)

class Newton
{
private:
    double function(double x)
    {
        return 4*x * x * x + 3*x * x - 1;
    }
    double derivativeFunction(double x)
    {
        return 12 * x * x + 6 * x;
    }

public:
    double precision=0.001;
    
     
};

int main()
{
    Newton Obj;
    Obj.Raphson();
    return 0;
}