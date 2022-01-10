#include <iostream>

using namespace std;

class Mammals
{
	public:
		void display1()
		{
			cout<<"I am Mammal\n";
		}
};

class MarineAnimal
{
	public:
		void display2()
		{
			cout<<"I am Marine Animal\n";
		}
};

class BlueWhale:public Mammals,public MarineAnimal{
	public:
		void display()
		{
			cout<<"I belong to both the categories : Mammals as well as Marine Animals\n";
		}
};
int main()
{
	Mammals ob1;
	MarineAnimal ob2;
	BlueWhale ob3;
	ob1.display1();
	ob2.display2();
	ob3.display1();
	ob3.display2();
	ob3.display();
	return 0;
}