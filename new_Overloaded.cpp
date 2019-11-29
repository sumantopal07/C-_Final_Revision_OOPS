#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    static int x,y;
    A()
    {
        ++x;
    }
    ~A()
    {
        --x;
    }
    void* operator new(size_t sz)
    {
        ++y;
        --x;
    }
};
int A::x=0;
int A::y=0;
int main()
{
    A a,b,c,d;
    A *ptr=new A();
 //   delete ptr;new
    cout<<A::x<<" "<<A::y<<"\n";
    return 0;
}
