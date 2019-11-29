#include<bits/stdc++.h>
using namespace std;
class Entity
{

public:
    int x,y;
    void Move(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
class Player: public Entity
{
public:
    void print()
    {
        cout<<x<<" "<<y<<"\n";
    }
};
int main()
{
    cout<<sizeof(Player);
    Player x;
    x.Move(9,8);
    x.print();
    return 0;
}
