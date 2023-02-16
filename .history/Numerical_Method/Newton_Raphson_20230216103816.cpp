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
        double x0;
        void Raphson()
        {
            int step = 1,N,f1;
            cout<<"Enter the step number: ";    cin>>N;
            while(true)
            {
                x0 = -9 + rand()%10;
                if(derivativeFunction(x0)!=0)
                    break;
            }
            do
            {
                double df = derivativeFunction(x0);
                double f = function(x0);
       
};

int main()
{
    Newton Obj;
    Obj.Raphson();
    return 0;
}