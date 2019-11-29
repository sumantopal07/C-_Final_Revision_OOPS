#include<bits/stdc++.h>
using namespace std;
class A
{
	int a;
public:
	virtual void f1() { cout << "A's F1 \n"; }
	void f2() { cout << "A's F2 \n"; }
};
class B : public A
{
	int b;
public:
	//Function Overriding
	void f1() { cout << "B's F1 \n"; }
	void f2(int x) { cout << "B's F2 \n"; }
};
//Base class pointer can point to the descendant class
//But Not Converse
int main()
{
	A* p, o1;
	B o2;
	p = &o2;
	o2.f1();//B's F1(Early Biding)
	p->f1();//Pointer Type is taken to priority 
	return 0;
}