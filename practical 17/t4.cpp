#include <bits/stdc++.h>
using namespace std; 

void printvector(vector<int> v) 
{     
	vector<int>::iterator it;     
	for (it = v.begin(); it != v.end(); ++it)         
		cout << *it << " ";     
	cout << '\n'; 
}
 
void printArray(int a[], int n) 
{     
	for (int i = 0; i < n; i++)         
		cout << a[i] << " ";     
	cout << '\n'; 
} 

int main() 
{          
	int arr[] = {2, 7, 3, 1, 8, 3, 3, 4};     
	// Task 1     
	int n = sizeof(arr) / sizeof(arr[0]);     
	vector<int> vec(arr, arr + n);     
	// Task 2    
	cout << "\nPrinting vector before sorting : \n";     
	printvector(vec);     
	sort(vec.begin(), vec.end());     
	cout << "\nPrinting vector after sorting : \n";     
	printvector(vec);     
	// Task 3    
	reverse(vec.begin(), vec.end());     
	cout << "\nPrinting vector after Reversing : \n";     
	printvector(vec);
	// Task 4          
	cout << "\nMax element of vector is : " << *(max_element(vec.begin(), vec.end())) << endl;
	// Task 5
	cout<<" \nMin Element of vector is : " << *(min_element(vec.begin(), vec.end())) << endl;     
	// Task 6    
	cout << "\noccurrence of an 3 in vector :" << count(vec.begin(), vec.end(), 3) << endl;
	// Task 7 
	sort(arr, arr + n);     
	cout << "\nPrinting array after sorting :\n";     
	printArray(arr, n);
	//Task 8     
	cout << "\nUsing Binary Search for finding 7 in an Array : \n ";     
	if (binary_search(arr, arr + n, 7))     
	{         
		cout << "\n7 Exist in the Array \n";
	}
    else     
	{         
		cout << "\n7 Doesn't Exist in the Array\n";     
	}     
	return 0; 
}