#include<iostream>

using namespace std;

class A
{
  public:
    int k;
};
class B : public A
{

};
class C : public A
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
