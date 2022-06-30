#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        bool flag = true;

        for(int i = 0; i < n-1 && flag; i++) {
            if(a[i] < a[i+1]) continue;
            else flag = false;
        }
        if(flag) cout << "YES" << endl;

        else {
            
            bool flag = true;
            int i, j ;
            for(i = 0 ; i < n - 1 && flag; i++){
                for( j = 0 ; j < n - 1 -i  && flag ; j++){
                    if(a[j] + a[j+1] <= x ) continue ;
                    else flag = false;

                }
            }
            if(flag) cout << "YES" << endl;
            else  cout << "NO" << endl;
        } 
    }
    return 0;
}