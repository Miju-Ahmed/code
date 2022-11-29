#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<char>a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for(auto& str:a)
        cout<<str<<" ";
    cout<<endl;

    set<int, greater<int> > s1;
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
    s1.insert(50);
    s1.insert(10);

    set<int, <greater>>::iterator itr;
    cout<<"The sert s1:"<<endl;
    for(itr = s1.begin(); itr!=s1.end(); itr++);
        cout<<*itr<<" ";
    cout<<endl;

    set<int>s2(s1.begin(), s1.end());
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    s2.erase(s2.begin(), s2.find(30));
    cout << "\nThe set s2 after erase : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}