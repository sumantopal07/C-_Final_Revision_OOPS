#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var=8;
    int* ptr =&var;
    cout<<&ptr<<" "<<ptr<<" "<<*ptr<<"\n";
    *ptr+=4;
    cout<<&ptr<<" "<<ptr<<" "<<*ptr<<"\n";

    int** ptr2=&ptr;
    cout<<&ptr2<<" "<<ptr2<<" "<<*ptr2<<" "<<**ptr2<<"\n";
    **ptr2+=4;
    cout<<&ptr2<<" "<<ptr2<<" "<<*ptr2<<" "<<**ptr2<<"\n";
    char* buffer=new char[8];
    memset(buffer,'a',8);
    char* temp=buffer+3;
    *temp='\0';
    cout<<buffer;
    return 0;
}
