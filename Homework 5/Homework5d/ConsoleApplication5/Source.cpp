/////////////////////////////
//Morgan Sherve
//June 11, 2014
//Exercise 12.20
///////////////////////////////

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

template <typename T>
	void shuffle(vector<T>& v)
	{

		//random order
		srand(time(0));
		for( int i=0; i < v.size(); i++)
		{
			int order = rand() % v.size();
			int temp= v[i];
			v[i] = v[order];
			v[order]= temp;
		}


	}

int main()
{
		int elements = 10;


		//enter values into test vector
		vector <int> v1;
			for (int i=0; i < 10; i++)
			{
				cout << "Enter an element: " << endl;
				cin >> elements;
				v1.push_back(elements);
			}

			shuffle(v1);
					//show new order
		cout << "Shuffled numbers: ";
		for (int i=0; i < v1.size(); i++)
		{
			cout << v1[i] << ", ";
		}
}


