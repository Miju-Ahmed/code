#include<bits/stdc++.h>
using namespace std;

#define f(x) 3*x - cos(x) - 1
#define g(x) 3+sin(x)

class Newton
{

private:
    double e=0.0001;
    
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }
    double derivativeFunction(double x)
    {
        return 3 * x * x + 2 * x;
    }

public:
    
     
};

int main()
{
    Newton Obj;
    Obj.Raphson();
    return 0;
}