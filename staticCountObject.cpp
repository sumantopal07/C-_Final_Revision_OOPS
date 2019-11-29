#include<bits/stdc++.h>
using namespace std;
class Singleton
{
private:
    static int u;
public:
    Singleton()
    {
        ++u;
    }
     static Singleton& Get()
    {
         Singleton d;
        return d;
    }
    static void Hello()
    {
        //static int u;
        cout<<"Hi!!\n";
        cout<<u<<"\n";
    }
};
int Singleton::u=0;
int main()
{
    Singleton x=Singleton::Get();
    x.Hello();
     Singleton y=Singleton::Get();
    y.Hello();
    return 0;
}
