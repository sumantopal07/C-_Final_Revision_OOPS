#include<bits/stdc++.h>
using namespace std;
class Entity
{
    public:
    virtual void print(){}
};
class SubClass: public Entity
{
    string password;
    void print()
    {
        cout<<password;
    }
public:
    SubClass(string password)
    {
        this->password=password;
    }
};
int main()
{
    SubClass obj("1234");
    Entity *ptr=&obj;
    ptr->print();
    return 0;
}
