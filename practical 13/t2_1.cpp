#include <iostream>

using namespace std;

class Base
{
public:
    virtual int add(int x,int y)
    {
        return(x+y);
    }
    
    virtual void display()=0;
};

class Child:public Base
{
public:

    virtual float add(float x,float y)
    {
        return(x+y+1);
    }
    
    void display()
    {
    	cout<<"This is base class"<<endl;
    }
};

int main()
{
   	Base *ptr=new Base;
    cout<<ptr->add(1.3f,2.7f)<<endl;
    return 0;
}