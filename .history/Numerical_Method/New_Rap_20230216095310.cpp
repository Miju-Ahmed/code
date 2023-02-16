#include<bits/stdc++.h>
using namespace std;


class NR
{
private:
    double e=0.00001;
    double fx(double x)
    {
        return 4*x*x*x*x-3*x*x*x+7*x*x-11*x+15;
    }
    double gx(double x)
    {
        return 16*x*x*x-9*x*x+7*x-11;
    }
public:
    double root;
    void NewtonRaphson
    {
        srand((int)time(0));
        while(true)
        {
            root = -9 + rand()%10;
            if(gx(root)==0)
            
        }
    }
    
}