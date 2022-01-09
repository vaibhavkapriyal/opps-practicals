#include<iostream>

using namespace std;

class A{
    int a;
  public :
    A()
    {
      a=0;
      cout<<"default A's constructor\n";
	}
	
	~A()
	{
	  cout<<"A's Desturctor\n";
	}
};

class B : public A{
    int c;
  public :
    B()
    {
      c=0;
      cout<<"default B's constructor\n";
	}
	
	~B()
	{
	  cout<<"B's Desturctor\n";
	}
	
};

int main()
{
	A *ptr=new B;
	ptr->~A();
	ptr->~B();
	return 0;
}