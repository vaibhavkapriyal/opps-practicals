#include <iostream>
using namespace std;

class Complex {

   public:
   	int a;
   	
    void input() {
        cout << "Enter a number:\n ";
        cin >> a;
    }

    friend Complex operator < (const Complex& obj);
    
    void output() {
    	cout<<"Smaller number is "<<a<<"\n";
    }

};

Complex operator < (Complex& obj1,Complex& obj2) {
        if(obj1.a<obj2.a)
        	return (obj1.a);
        else
        	return (obj2.a);
    }

int main() {
    Complex complex1, complex2, result;

    complex1.input();

    complex2.input();

    result = complex1 < complex2;
    result.output();

    return 0;
}
