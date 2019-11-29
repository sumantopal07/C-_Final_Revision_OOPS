#include<bits/stdc++.h>
using namespace std;
template<class T>
void print(T *e)
{
    cout<<e->x<<" "<<e->y<<"\n";
}
class Entity
{
public:
    int x,y;
    Entity(int x,int y)
    {
        this->x=x;
        this->y=y;
        print<Entity>(this);
    }
};

int main()
{
    Entity e(1,2);
    return 0;
}
