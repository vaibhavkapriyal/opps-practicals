#include <iostream>

using namespace std;

int main()
{
	int arr[]={10,20,30};
	int *p;
	p=&arr;
	cout<<*p<<"\n";
	p++;
	cout<<*p<<"\n";
	return 0;
}
