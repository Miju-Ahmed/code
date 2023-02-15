 #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    
    class BisectionMethod{

      private:
      double f(double x){
        return x*x*x - x*x + 2;
      }

      public:
      double a = -200, b=300;
       BisectionMethod(){
        for(int i = -9; i <= 9; i++){
          for(int j = -9; j<=9; j++){
            if(f(i) * f(j) < 0){
              a = min(i,j);
              b = max(i, j);
            }
          }
        }
      }
      void ab(){
        double pricision = 0.01;
      double c = (a + b) / 2;
      double x = c;
          if(f(a) * f(c) > 0){
                    a = c;
                  }else{
                    b = c;
                  }
                  c =(a+b)/2;
      while(true){
        if(c == 0.0) break;
         else if(f(a) * f(c) > 0){
          a = c;
        }else{
          b = c;
        }
        if(abs(c - x) <= pricision) break;
        x = c;
        c = (a + b) / 2;
      }
      cout<<c<<endl;
      }
    };

    int main(){  
      BisectionMethod bsm;
      bsm.ab();
      return 0;
    }