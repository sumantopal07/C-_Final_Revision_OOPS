#include<bits/stdc++.h>
using namespace std;
void Increment(int& value){++value;}
void Decrement(int* value){*value=*value-1;}
//References are to make look cleaner source code
int main()
{
    int a=5,b=2;
    int& r=a;//alias
    r=b;
    cout<<a<<"\n";
    Increment(a);
    cout<<a<<"\n";
    Decrement(&a);
    cout<<a;
    return 0;
}
