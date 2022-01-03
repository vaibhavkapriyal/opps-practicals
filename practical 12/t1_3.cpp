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

class B:protected A
{
	public:
		void display()
		{
			x=10;
			//y=20; #error will occur since y is protected and class B is also protected
			//z=30; #error will occur during execution 
			cout<<"Value 1st using inheritence: "<<x<<"\n";
			//cout<<"Value 2nd using inheritence: "<<y<<"\n";
			//cout<<"Value 3rd using inheritence: "<<z<<"\n";
		}
};

class C:public B
{
	public:
		void display()
		{
			y=20;
			cout<<"Value 2nd using inheritence: "<<y<<"\n";
		}
};
int main()
{
	B obj;
	C obj1;
	//obj.x=10 #will throw an error since class B is private
	//obj.y=20 #will throw an error since class B is private
	//obj.y=30 #will throw an error since class B is private
	obj.display();
	obj1.display();
	return 0;
}
