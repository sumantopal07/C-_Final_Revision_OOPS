#include<bits/stdc++.h>
using namespace std;

class String
{
    char* m_Buffer;
    unsigned int m_Size;
public:
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
int main()
{
    String string1="Hello";
    String x=string1;
    x[2]='f';
    cout<<string1<<endl<<x<<endl;
    cin.get();
    return 0;
}
