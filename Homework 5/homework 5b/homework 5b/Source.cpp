////////////////////
//Morgan Sherve
//Exercise 12.4
//June 11, 2014
////////////////////

#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool isSorted (const T list[], int size)
{
	bool sorted;
	for (int i=0; i < size; i++)
	{
		//find lowest value
		T currentMin = list [i];
		int currentMinIndex = i;
	
		
		for (int j = i+1; j < size; j++)
			{
				if (currentMin > list[j]) //if currentMin is bigger than the next number, then it is not sorted
				{
					sorted = false;
				}
				else
				{
					sorted = true;
				}
			}
	}

	if (sorted == true) // only outputs true, 4 times
	{
		cout << "true" << endl;
	}
	else if (sorted == false)
	{
		cout << "false" << endl;
	}

		return sorted;
}

int main()
{
	int list1[] = {2, 4, 6, 8, 12};
	double list2[] = {1.2, 3.4, 5.6, 6.7, 7.8};
	string list3[] = {"War", "uh",  "yeah", "What", "is", "it", "good", "for"};

	isSorted(list1, 5);
	isSorted(list2, 5);
	isSorted(list3, 8);

	return 0;
}

