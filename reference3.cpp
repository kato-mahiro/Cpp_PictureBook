#include<iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
};

void PrintPersonRef(Person &psn) //参照渡し
{
    psn.age++;
    cout << psn.name <<"さん " << psn.age <<"歳 " << endl;
}

void PrintPersonPtr(Person *psn)
{
    psn->age = 1;
    cout << psn->name << "さん "<< psn->age << "歳 " <<endl;
}

int main()
{
    Person person1 = {"Shiori",18};

    PrintPersonRef(person1);
    PrintPersonPtr(&person1);
    return 0;
}
