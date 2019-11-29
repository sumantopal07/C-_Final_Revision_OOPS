#include<bits/stdc++.h>
using namespace std;
class Vector2
{
public:
    float x,y;
    Vector2(float x,float y)
    :x(x),y(y){}

    Vector2 operator-(const Vector2& other)
    {
        return Vector2(x-other.x,y-other.y);
    }
    Vector2 operator*(const Vector2& other)
    {
        return Vector2(other.x*x,other.y*y);
    }
    bool operator==(const Vector2& other)
    {
        return x==other.x && y==other.y;
    }
    bool operator!=(const Vector2& other)
    {
        return !(*this==other);
    }
};
ostream& operator<<(ostream& stream,const Vector2& other)
{
    stream<<other.x<<","<<other.y;
}
int main()
{
    Vector2 position(3.4f,22.0f);
    Vector2 speed(3.49f,282.0f);
    Vector2 powerUp(31.0f,14.0f);
    Vector2 result1=position-speed*powerUp;
    cout<<result1;
    if(position!=powerUp)
        cout<<"True";
    return 0;
}
