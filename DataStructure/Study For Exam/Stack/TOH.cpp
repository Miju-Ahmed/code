#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t=0;

void Tower_Of_Hanoi(int n, char from, char to, char aux)
{
    if(n==0)    return;
    t++;
    Tower_Of_Hanoi(n-1, from, aux, to);
    cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<" process "<<t<<endl;
    Tower_Of_Hanoi(n-1, aux, to, from);
}

int main()
{
    int n;
    cin>>n;
    Tower_Of_Hanoi(n, 'A', 'B', 'C');
    return 0;
}