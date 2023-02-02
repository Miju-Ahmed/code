#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t=0;

void TowerOfHanoi(int n, char from, char to, char aux)
{
    if(n==0) return;
    t++;
    TowerOfHanoi(n-1, from, aux, to);
    cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<" Process "<<t<<endl;
    TowerOfHanoi(n-1, aux, to, from);
}

int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n, 'A','B', 'C');
    return 0;
}