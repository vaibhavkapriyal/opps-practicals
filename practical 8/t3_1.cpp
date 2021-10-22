#include <iostream>

using namespace std;

int main()
{
	int a=30;
	int *p;
	p=&a;
	int **q;
	q=&p;
	cout<<*p<<"\n";
	cout<<**q<<"\n";
	return 0;
}
