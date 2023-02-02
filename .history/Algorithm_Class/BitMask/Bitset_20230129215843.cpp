#include<bits/stdc++.h>
using namespace std;

int main()
{
    // bitset<2>a;
    // a[0]=0;
    // a[1]=1;
    // cout<<a<<endl;

    // bitset<4>a_int(7);
    // cout<<a_int<<endl;
    // int n = (int) a_int.to_ulong();
    // cout<<n<<endl;

    // string s = "1010110100";
    // bitset<10> b(s);
    // cout<<b[0]<<endl;
    // string new_s = b.to_string();
    // cout<<new_s<<endl;
    // cout<<b.count()<<endl;

    //Basic Operation
    // bitset<4> a(string("0101"));
    // bitset<4> b(string("1010"));

    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(~a)<<endl;
    // cout<<(a<<1)<<endl;
    // cout<<(b>>1)<<endl;

    // string s = "1010110100";
    // istringstream stream(s);
    // bitset<2>s1;
    // bitset<6>s2;
    // stream>>s1;
    // cout<<s1<<endl;
    // stream>>s2;
    // cout<<s2<<endl;

    //Check any bit set or not
    // bitset<4> a(string("1010"));
    // bitset<4> b(string("0000"));
    // cout<<a.any()<<endl;
    // cout<<b.any()<<endl;

    //Opposite of any()
    // cout<<a.none()<<endl;
    // cout<<b.none()<<endl;

    //Check all set or not
    // bitset<4> a(string("1010"));
    // cout<<a.all()<<endl;
    // bitset<4> b(string("1111"));
    // cout<<b.all()<<endl;

    //Flip the bit like as NOT(~) operator
    // bitset<4>a(string("1010"));
    // cout<<a<<endl;
    // cout<<a.flip()<<endl;
    // cout<<a<<endl;
    // cout<<a.flip(1)<<endl;

    //Reset all or any particular bit
    // bitset<4>a(string("1010"));
    // cout<<a<<endl;
    // cout<<a.reset(1)<<endl;
    // cout<<a.reset()<<endl;

    //Set all or any particular bit
    bitset<4>a(string("1010"));
    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<a
}