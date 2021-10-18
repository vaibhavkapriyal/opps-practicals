#include <iostream>

using namespace std;

void fac(int n)
{
	int f=1,i;
	for(i=n;i>0;i--)
		f=f*i;
	cout<<"Factorial of "<<n<<":-"<<f<<"\n";
}
 int main()
 {
 	cout<<"Enter the no. to calculate factorial:\n";
 	int n;
 	cin>>n;
 	fac(n);
 	return 0;
 }
