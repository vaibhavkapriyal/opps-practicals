#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <iterator> 

using namespace std; 

// function for printing the elements in a vector 

void printvector(vector<int> v)
{     
	vector<int>::iterator it;     
	for (it = v.begin(); it != v.end(); ++it)         
		cout << *it << " ";     
	cout << '\n'; 
} 

int main()
{     
	vector<int> v;     
	int n;     
	cout << "\nEnter the size of the vector \n";     
	cin >> n;
	// Task 1
	cout<<"\nEnter the elemets in the vector\n";    
	for (int i = 0; i < n; i++)
	{         
		int ele;         
		cin >> ele;         
		v.push_back(ele);     
	}
	cout<<"\nElements in the list are:-\n";
	// Task 2     
	printvector(v);     
	// Task 3     
	cout << "\nSize of the vector is : " << v.size() << "\t Capacity of vector is : " << v.capacity() << "\n";     
	// Task 4     
	v.resize(2 * n, 0);     
	cout<< "\nPrinting vector after resizing and intialising after 0\n";     
	printvector(v);     
	// Task 5    
	cout << "\nChecking vector is empty or not after :\n";     
	if (v.empty())         
		cout << "\nVector is empty\t";     
	else         
		cout << "\nVector is not empty";     
	return 0; 
}