#include<bits/stdc++.h>
using namespace std;
class Entity
{

public:
    virtual string GetName()
    {
        return "Entity";
    }
};
class Player: public Entity
{
    string m_Name;
public:
    Player(string name)
    {
        m_Name=name;
        name+="aa";
    }
    string GetName() override
    {
        return m_Name;
    }
};
void printName(Entity* entity)
{
    cout<<entity->GetName()<<"\n";
}
int main()
{
    Entity* e=new Entity();
    Player* x=new Player("Hello");
    printName(e);
    printName(x);
    return 0;
}
