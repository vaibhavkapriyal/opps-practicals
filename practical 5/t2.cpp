#include <iostream>
using namespace std;
void intfun()
{
	int a=5657865;
	cout<<a<<"  size=  ";
	cout<<sizeof(a)<<'\n';
	cout<<"size of int = "<<sizeof(int)<<'\n';
}
void charfun ()
{
	char i='b';
	cout<<i<<"  size=  ";
	cout<<sizeof(i)<<'\n';
	cout<<"size of charater = "<<sizeof(char)<<'\n';
}
void boolfun ()
{
	bool b=1;
	cout<<b<<"  size=  ";
	cout<<sizeof(b)<<'\n';
	cout<<"size of boolean = "<<sizeof(bool)<<'\n';
}
void shortfun()
{
	short s=100;
	cout<<s<<"  size=  ";
	cout<<sizeof(s)<<'\n';
	cout<<"size of short int = "<<sizeof(short)<<'\n';
}
void floatfun()
{
	float f=12.6474f;
	cout<<f<<"  size=  ";
	cout<<sizeof(f)<<'\n';
	cout<<"size of float = "<<sizeof(float)<<'\n';
}
void longfun()
{
	long l=64579745756;
	cout<<l<<"  size=  ";
	cout<<sizeof(l)<<'\n';
	cout<<"size of long int = "<<sizeof(long)<<'\n';	
}
void doublefun()
{
	double d=3255.65658;
	cout<<d<<"  size=  ";
	cout<<sizeof(d)<<'\n';
	cout<<"size of double = "<<sizeof(double)<<'\n';	
}
void longdoublefun()
{
	long double lb=43254.8788;
	cout<<lb<<"  size=  ";
	cout<<sizeof(lb)<<'\n';
	cout<<"size of long double = "<<sizeof(long double)<<'\n';
}
void widecharfun()
{
	wchar_t ch=L'\0';
	cout<<ch<<"  size=  ";
	cout<<sizeof(ch)<<'\n';
	cout<<"size of wide charater = "<<sizeof(wchar_t)<<'\n';
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
