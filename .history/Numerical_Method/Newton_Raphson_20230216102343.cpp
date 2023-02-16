#include<bits/stdc++.h>
using namespace std;

#define f(x) 3*x - cos(x) - 1
#define g(x) 3+sin(x)

class Newton
{

private:
    double e;
    cout<<"Enter the tolerable value: ";    cin>>e;
    double function(double x)
    {
        return 3*x - cos(x) - 1;
    }
    double derivativeFundtion(double x)
    {
        return 3+sin(x);
    }

public:
        double x0;
        void Raphson()
        {
            while(true)
            {
                x0 = -9 + rand()%10;
                if()
            }
            do
            {
                g0 = g(x0);
                f0 = f(x0);
                if(g0==0.0)
                {
                    cout<<"Mathematical error.";
                    exit(0);
                }
                x1 = x0 - f0/g0;
                cout<<"Iteration---"<<step<<":\t x = "<<setw(10)<<x1<<" and f(x) = "<<setw(10)<<f(x1)<<endl;
                x0=x1;
                step++;
                if(step>N)
                {
                    cout<<"Not Convergent.";
                    exit(0);
                }
                f1 = f(x1);
            } while (fabs(f1)>e);
            
        }
};

int main()
{
    Newton Obj;
    Obj.Raphson();
    return 0;
}