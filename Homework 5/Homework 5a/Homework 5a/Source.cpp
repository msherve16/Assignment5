///////////////////////
//Morgan Sherve
//June 11, 2014
//Exercise 12.2
/////////////////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T>
int linearSearch (T list[], T key, int arraySize)
{
	for( int i = 0; i < arraySize; i++) 
		{ if (key == list[i])
			return i;
	}
	return -1;
}


int main()
{
	int list1[] = {2, 4, 6, 8, 12};
	double list2[] = {1.2, 3.4, 5.6, 6.7, 7.8};
	string list3[] = {"War", "uh",  "yeah", "What", "is", "it", "good", "for"};
	string s= "is";

	
	cout << linearSearch(list1, 4, 5) << endl;
	cout << linearSearch(list2, 6.7, 5) << endl;
	cout << linearSearch(list3, s, 8) << endl; //why

	return 0;
}
