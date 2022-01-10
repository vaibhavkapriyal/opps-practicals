#include<iostream>

using namespace std;

class A
{
  public:
    int k;
};
class B : virtual public A // virtual keyword makes memory shareable of any of the class to overcome diamond problem
{

};
class C : virtual public A
{
 
};
class D : public B , public C
{
  
};
int main(){
  D obj;
  obj.k=10;      //ERROR k is ambiguous i.e more than one existence of k 
  cout<<"K = "<<obj.k<<endl;
  return 0;
}
