#include <iostream>

using namespace std;

class A
{
	public:
		int x;
	
	protected:
		int y;
	
	private:
		int z;
};

class B:public A
{
	public:
		void display()
		{
			x=10;
			y=20;
			//z=30; #error will occur during execution 
			cout<<"Value 1st using inheritence: "<<x<<"\n";
			cout<<"Value 2nd using inheritence: "<<y<<"\n";
			//cout<<"Value 3rd using inheritence: "<<z<<"\n";
		}
};
int main()
{
	B obj;
	obj.display();
	return 0;
}
