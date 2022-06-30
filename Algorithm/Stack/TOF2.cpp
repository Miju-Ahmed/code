#include<bits/stdc++.h>
using namespace std;
#define ll long long

void towerOfHanoi(int n, char from, char to, char aux)
{
    if(n==0)
    {
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    cout<<"Move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    towerOfHanoi(n-1, aux, to, from);
}

int main()
{
    int n=4;
    towerOfHanoi(n,'A','B','C');
    return 0;
}