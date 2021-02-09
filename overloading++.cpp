#include<iostream>
using namespace std;
class Test
{
	private: int a,b;
	public: Test(int,int);
			void show();
			void operator++();
};
Test::Test(int x,int y)
{
	a=x;
	b=y;
}
void Test::show()
{
	cout<<"\nValue of a is: "<<a;
	cout<<"\nValue of b is: "<<b<<"\n";
}
void Test::operator++()
{
	a=a+1;
	b=b+1;
}
int main()
{
	Test t(2,3);
	t.show();
	++t;
	cout<<"\nAfter incrementing the value.....\n";
	t.show();
	return 0;
}