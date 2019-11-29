#include<bits/stdc++.h>
using namespace std;
class A
{
	int a;
public:
	void f1() { cout << "A's F1 \n"; }
	void f2() { cout << "A's F2 \n"; }
};
class B : public A
{
	int b;
public:
	void f1() { cout << "B's F1 \n"; }
	void f2(int x) { cout << "B's F2 \n"; }
};
int main()
{
	B obj;// will jump to class B if not find in child tha jump to parent
	obj.f1();// B's F1( Early Binding: )
	//obj.f2();//error f2 exist in B  but not match
	obj.f2(3);//not Error
	return 0;
}