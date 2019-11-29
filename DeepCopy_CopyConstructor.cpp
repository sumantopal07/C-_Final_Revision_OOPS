#include<bits/stdc++.h>
using namespace std;

class String
{
    char* m_Buffer;
    unsigned int m_Size;
public:
    //copy constructor
    String(const String& other)
        :m_Size(other.m_Size)
    {
        cout<<"Copy\n";
        m_Buffer=new char[m_Size+1];
        memcpy(m_Buffer,other.m_Buffer,m_Size);
        m_Buffer[m_Size]='\0';

    }
    String(const char* string1)
    {
        m_Size=strlen(string1);
        m_Buffer=new char[m_Size+1];
        memcpy(m_Buffer,string1,m_Size);
        m_Buffer[m_Size]='\0';
    }
    ~String()
    {
        cout<<m_Buffer<<"\n";
        delete[] m_Buffer;
    }
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }
    friend ostream& operator<<(ostream& stream,const String& obj);
};
ostream& operator<<(ostream& stream,const String & obj)
{
    stream<<obj.m_Buffer;
    return stream;
}
void Print(const String& str)
{
    cout<<str<<"\n";
}
int main()
{
    String string1="Hello";
    String x=string1;
    x[2]='f';
    Print(string1);
    Print(x);
    return 0;
}
/*
Copy
Hello
Heflo
Heflo
Hello

*/
