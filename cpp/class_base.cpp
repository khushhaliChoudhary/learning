#include <iostream>


class base
{
public:
	base(int value): val{value}{}
	virtual void fun(){std::cout << "base fun()" << std::endl;}
	int val;
};

class derived : public base
{
public:
	derived(int val1, int val2): val{val1}, base{val2}{}
	int val;
	void fun() override{std::cout << "derived fun() " << val  << std::endl;}
};


int main()
{
	derived d{12, 23};
	base * b = &d;

	b->fun();
	std::cout << b->val << std::endl;
}