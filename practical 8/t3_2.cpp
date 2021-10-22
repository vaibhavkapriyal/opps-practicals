#include <iostream>

using namespace std;

int main()
{
	int a=30;
	int *p;
	p=&a;
	int **q;
	q=&p;
	cout<<**q<<"\n";
	**q=20;
	cout<<**q<<"\n";
	return 0;
}
