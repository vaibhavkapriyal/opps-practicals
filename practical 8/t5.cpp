#include <iostream>

using namespace std;

int fac(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fac(n-1));
}
 int main()
 {
 	cout<<"Enter the no. to calculate factorial:\n";
 	int n,f=0;
 	cin>>n;
 	f=fac(n);
 	cout<<"Factorial of "<<n<<":-"<<f<<"\n";
 	return 0;
 }
