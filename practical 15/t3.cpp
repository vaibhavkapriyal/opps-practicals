#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"Hello World"<<endl;//using endl
	cout<<"this is a test"<<flush;//using flush
	cout<<endl<<"abc"<<ends;//using ends---->null charater will be added at the last
	cout<<setw(30)<<"this is C++"<<endl;//using setw
	double f =3.14159;  
    cout<<setprecision(5)<<f<<endl;  
  	cout<<setprecision(9)<<f<<endl;//using setprecision
  	cout<<hex<<11<<endl;//using hex
  	cout<<dec<<f<<endl;//using dec
  	char  a,b,c; 
  	stringstream s("  123"); 
  	s>>skipws>>a>>b>>c; 
  	cout <<a <<b<< c<<endl; 
  	stringstream p("  123"); 
  	p>>noskipws>>a>>b>>c; 
  	cout <<a <<b<< c<<endl;
  	return 0;
}
