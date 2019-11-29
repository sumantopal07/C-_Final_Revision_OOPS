#include<bits/stdc++.h>
using namespace std;
class Entity
{
    static int x;
    int count1;
public:
    Entity()
    {
        ++x;
        count1=x;
    }
    ~Entity()
    {
        cout<<"Destructor called"<<count1<<"\n";
    };
    void print()
    {
        cout<<count1;
    }
};
int Entity::x=0;
int main()
{
    Entity *a=new Entity[20];
    a[2].print();
    //delete(a);
    return 0;
}
