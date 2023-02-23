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
            double x;
            double pre = 0.001;
            double x0=1,x1=2;
            while(function(x0)*function(x1)>0.0)
            {
                x0 = rand()%10;
                x1 = rand()%10;
                x0 = min(x0,x1);
                x1 = max(x0,x1);
            }
            do
            {
                x = (x0+x1)/2;
                if(function(x0)*function(x)<0)  x1 = x;
                else    x0 = x;
                cout<<"x0: "<<x0
            } while (fabs(function(x0))>pre);
            cout<<x<<endl;
        }
};

int main()
{
    Bisection Obj;
    Obj.BisectionMethod();
    return 0;
}