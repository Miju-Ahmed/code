#include<bits/stdc++.h>
using namespace std;

struct Person
{
    char name[50];
    int citNo;
    float salary;
    struct university un;
}person1,person2;

struct university
{
    char uni[50];
};


int main()
{
    strcpy(person1.name, "Nishat Fatima");
    person1.citNo = 1999;
    person1.salary = 2500;
    strcpy(person1.un.uni,"East West University");
    cout<<"Name : "<<person1.name<<"\nCitizenship : "<<person1.citNo<<"\nSalary : "<<person1.salary<<endl;
    
    strcpy(person2.name,"Miju Chowdhury");
    person2.citNo = 2000;
    person2.salary = 3000;
    cout<<"Name : "<<person2.name<<"\nCitizenship : "<<person2.citNo<<"\nSalary : "<<person2.salary<<endl;
    return 0;
}


