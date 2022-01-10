#include <iostream>
#include <list> 
#include <iterator> 

using namespace std; 

// function for printing the elements in a list
 
void printList(list<int> g) 
{    
	list<int>::iterator it;     
	for (it = g.begin(); it != g.end(); ++it)         
		cout << *it << " ";     
	cout << '\n'; 
} 
int main() 
{     
	list<int> l;     
	int n;     
	cout << "\nEnter the size of the List \n";     
	cin >> n;
	cout<<"\nEnter elemets in the list\n";   
	for (int i = 0; i < n; i++)     
	{         
		int ele;         
		cin >> ele;         
		l.push_back(ele);     
	}
	// Task 1
	cout<<"\nElements in the list are:- \n";    
	printList(l);     
	// Task 2    
	cout << "\nSize of the list is : " << l.size() << "\n";     
	// Task 3
	l.sort();     
	cout << "\nPrinting list after sorting\n";     
	printList(l);     
	// Task 4     
	l.reverse();     
	cout << "\nPrinting list after Reversing\n";     
	printList(l);     
	return 0; 
}