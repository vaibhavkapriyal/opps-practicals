#include <bits/stdc++.h> 
#include <map> 
#include <algorithm> 
#include <iterator> 

using namespace std; 
// function for printing the elements in a map 

void printmap(map<int, string> v) 
{     
	map<int, string>::iterator it;     
	for (it = v.begin(); it != v.end(); ++it)         
		cout << it->first << " " << it->second << "\n";     
	cout << '\n'; 
} 

int main() 
{   // Task 1  
	map<int, string> m;
	// Task 2          
	m.insert(pair<int, string>(4, "Hello"));
    m.insert(pair<int, string>(6, "World"));
    m.insert(pair<int, string>(8, "This"));     
    m.insert(pair<int, string>(1, "is"));     
    m.insert(pair<int, string>(7, "OOPS"));     
    m.insert(pair<int, string>(2, "C++"));     
    m.insert(pair<int, string>(5, "program"));     
    // Task 3 
    cout<<"\nElements in the map are:-\n";    
    printmap(m);     
    // Task 4     
    auto itr = m.find(4);     
    cout << "\nitr is poiting to \n"<< itr->first << " " << itr->second << " \n";     
    // Task 5     
    map<int, string> copyMap = m;     
    cout << "\nPrinting copyMap :\n";     
    printmap(copyMap);     
    // Task 6     
    cout << "\nDeleting a key-value from copyMap : 9 algorithm\n"; 
    copyMap.erase(5);     
    cout << "\nPrinting map After deleting key = 9 from it\n";     
    printmap(copyMap);     
    // Task 7     
    cout << "\nSize of the map is : " << copyMap.size() << "\t maxSize of map is : " << copyMap.max_size() << "\n";     
    // Task 8     
    cout << "\nChecking map is empty or not  :\n";     
    if (copyMap.empty())         
    cout << "\nMap is empty\n";     
    else         cout << "\nMap is not empty\n";     
    // Task 9     
    copyMap.clear();     
    cout << "\nPrinting a Map after Clearing it :\n";     
    printmap(copyMap);     
    return 0; 
    }