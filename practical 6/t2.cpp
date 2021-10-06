#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s,temp;
	cout<<"Enter a string\n";
	getline(cin,s);
	int l=0,i;
	l=s.length();
	for(i=l-1;i>=0;i--)
	{
		temp=temp+s[i];
	}
	if(temp==s)
		cout<<"Palindrome\n";
	else
		cout<<"Not a Palindrome\n";
	return 0;
	
}
