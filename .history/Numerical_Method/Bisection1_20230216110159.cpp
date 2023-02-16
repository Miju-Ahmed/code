#include<bits/stdc++.h>
using namespace std;

class Bisection
{
    private:
        double function(double x)
        {
            return x*x*x+x*x-1;
        }
    public:
        void BisectionMethod()
        {
            double pre = 0.001;
            double x0=1,x1=2;
            while(function(x0)*function(x1)>0.0)
            {
                x0 = rand()%10;
                x1 = rand()%10;

            }
        }
};

int main()
{
    Bisection Obj;
    Obj.BisectionMethod();
    return 0;
}