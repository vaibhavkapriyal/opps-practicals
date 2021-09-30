#include <iostream>
using namespace std;
void intfun()
{
	int a=5657865;
	cout<<a<<'\n';
}
void charfun ()
{
	char i='b';
	cout<<i<<'\n';
}
void boolfun ()
{
	bool b=1;
	cout<<b<<'n';
}
void shortfun()
{
	short s=100;
	cout<<s<<'n';
}
void floatfun()
{
	float f=12.6474f;
	cout<<f<<'\n';
}
void longfun()
{
	long l=64579745756;
	cout<<l<<'\n';
}
void doublefun()
{
	double d=3255.65658;
	cout<<d<<'\n';	
}
void longdoublefun()
{
	long double lb=43254.8788;
	cout<<lb<<'n';
}
void widecharfun()
{
	wchar_t ch=L'\0';
	cout<<ch<<'\n';
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
