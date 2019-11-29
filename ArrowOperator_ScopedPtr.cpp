#include<bits/stdc++.h>
using namespace std;
class Entity
{
public:
    void Print()
    {
        cout<<"Hello\n";
    }
};
class ScopedPtr
{
private:
    Entity* m_Obj;
    public:
        ScopedPtr(Entity * entity)
        :m_Obj(entity)
        {}
        ~ScopedPtr()
        {
            delete m_Obj;
        }
        Entity* operator->()
        {
            return m_Obj;
        }
};
int main()
{
    ScopedPtr entity = new Entity();
    entity->Print();
    return 0;
}
//HELLO
