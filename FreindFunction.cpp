#include <bits/stdc++.h>
using namespace std;
//Freind is not a member Function
//Friend can access more than one classes
class Complex
{
	int a, b;
public:
	void setData(int a,int b)
	{
		this->a = a;
		this->b = b;
		//cout << a << " " << b << "\n";
	}
	friend void fun(Complex);
};
void fun(Complex obj)
{
	cout << obj.a << " " << obj.b << "\n";
}
//error
/*void fun()
{
	cout << a << " " << b << "\n";
}*/
int main()
{
	//obj.fun();//errpr
	Complex c1, c2, c3;
	c1.setData(8,7);
	fun(c1);
	return 0;
}