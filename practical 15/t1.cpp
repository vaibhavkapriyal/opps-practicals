#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ofstream write;
	ifstream read;
	write.open("s1.txt");
	string str;
	getline(cin,str);
	write<<str;
	write.close();
	
	write.open("s2.txt");
	read.open("s1.txt");
	char ch;
	while(read)
	{
		read>>ch;
		if(read.eof())
		{
			break;
		}
		write<<ch;
	}
	write.close();
	read.close();
	return 0;
}