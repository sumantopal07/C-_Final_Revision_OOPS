#include<bits/stdc++.h>
using namespace std;
class Printable//Interface
{
public:
    virtual string GetClassName()=0;
};
class Entity: public Printable
{
    public:
    virtual string GetName()
    {
        return "Entity";
    }
    string GetClassName()
    {
        return "Entity";
    }
};
class Player: public Printable
{
public:
    string GetClassName()
    {
        return "Player";
    }
};
void Print(Printable *obj)
{
    cout<<obj->GetClassName()<<"\n";
}
int main()
{
    Printable *e=new Entity();
    Print(e);
    Printable *p=new Player();
    Print(p);
    return 0;
}
