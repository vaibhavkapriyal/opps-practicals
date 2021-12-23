# include <iostream>

using namespace std;

class Base
{
public:
    int add(int x,int y)
    {
        return(x+y+1);
    }
    float add(float x,float y)
    {
        return(x+y);
    }
};
class Child:public Base
{
public:
    using Base::add;
    int add(int x,int y)
    {
        return(x+y+2);
    }
};

int main()
{
    Base ob1,ob2;
    cout<<"using object of Base class"<<endl;
    cout<<ob1.add(40,30)<<endl;
    cout<<ob2.add(12.6f,15.2f)<<endl;
    Child ob3;
    cout<<"using object of Child class"<<endl;
    cout<<ob3.add(5,8)<<endl;
    cout<<ob3.add(3.4f,5.3f)<<endl;
    return 0;
}

