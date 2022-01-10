#include<iostream>
#include<string>
#include<fstream>
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

    read.open("s1.txt");
    write.open ("s1.txt",ios::app); // Append mode
    if(read.is_open())
        write<< "\n Writing to a file opened from program.\n"; // Writing data to file
    cout<<"\n Data has been appended to file";
    read.close();
    write.close(); // Closing the file
    return 0;
}