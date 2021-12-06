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

class B:private A
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
	//obj.x=10 #will throw an error since class B is private
	//obj.y=20 #will throw an error since class B is private
	//obj.y=30 #will throw an error since class B is private
	obj.display();
	return 0;
}
