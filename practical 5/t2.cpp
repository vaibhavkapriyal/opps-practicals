#include <iostream>
using namespace std;
void intfun()
{
	int a=5657865;
	cout<<a<<"  size=  ";
	cout<<sizeof(a)<<'\n';
}
void charfun ()
{
	char i='b';
	cout<<i<<"  size=  ";
	cout<<sizeof(i)<<'\n';
}
void boolfun ()
{
	bool b=1;
	cout<<b<<"  size=  ";
	cout<<sizeof(b)<<'\n';
}
void shortfun()
{
	short s=100;
	cout<<s<<"  size=  ";
	cout<<sizeof(s)<<'\n';
}
void floatfun()
{
	float f=12.6474f;
	cout<<f<<"  size=  ";
	cout<<sizeof(f)<<'\n';
}
void longfun()
{
	long l=64579745756;
	cout<<l<<"  size=  ";
	cout<<sizeof(l)<<'\n';	
}
void doublefun()
{
	double d=3255.65658;
	cout<<d<<"  size=  ";
	cout<<sizeof(d)<<'\n';	
}
void longdoublefun()
{
	long double lb=43254.8788;
	cout<<lb<<"  size=  ";
	cout<<sizeof(lb)<<'\n';
}
void widecharfun()
{
	wchar_t ch=L'\0';
	cout<<ch<<"  size=  ";
	cout<<sizeof(ch)<<'\n';
}

int main()
{
	intfun();
	charfun ();
	boolfun ();
	shortfun();
	floatfun();
	longfun();
	doublefun();
	longdoublefun();
	widecharfun();
	return 0;
}
