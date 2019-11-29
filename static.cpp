#include<bits/stdc++.h>
using namespace std;
void fx()
{
    static int i=0;
    ++i;
    cout<<i<<"\n";
}
int main()
{
    fx();
    fx();
    fx();
    fx();
    return 0;
}
