#include<iostream>
#include<string.h>

using namespace std;

class Person
{
  public:
    Person();
    Person::Person(const char *str);
    Person::Person(const char *str, int yy, const char* pn);
    Person(const Person &psn); //コピーコンストラクタ
    ~Person(){if(name!=NULL) delete [] name;}

    void init(const char *str,int yy, const char* pn);
    void SetName(const char *str);
    void SetAge(const int yy){age = yy;}
    void SetPhoneNum(const char *pn){strcpy(phonenum,pn);}
    char *GetName(){return name;}
    int GetAge(){return age;}
    char *GetPhoneNum(){return phonenum;}
  private:
    char *name;
    int age;
    char phonenum[15];
};

void Person::init(const char *str,int yy, const char* pn)
{
    name = new char[strlen(str) +1];
    strcpy(name,str);
    age = yy;
    strcpy(phonenum,pn);
}

Person::Person()
{
    name = NULL;
    age = 0;
    phonenum[0] = '\0';
}

Person::Person(const char *str)
{
    init(str,0, " ");
}
