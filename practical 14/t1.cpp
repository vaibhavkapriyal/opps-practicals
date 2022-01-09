#include <iostream>

using namespace std;
    
class Base
{
public:
    virtual void show()
    { 
    	cout<<"In Base\n"; 
    }
    void display()
    { 
     	cout<<"In Base\n"; 
    }
};
    
class Derived: public Base
{
public:
    void show()
    {
    	cout<<"In Derived\n";
    }
    void display()
    { 
     	cout<<"In Derived\n"; 
    }
};
    
int main(void)
{
    Base *bp = new Derived;
    bp->show();  // RUN-TIME POLYMORPHISM late binding()
    Base *dp = new Derived;
    dp->display(); //Any normal function call (without virtual) is binded early.
    return 0;
}
