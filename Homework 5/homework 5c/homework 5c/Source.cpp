//////////////////////////////
//Morgan Sherve
//Exercise 12.8
/////////////////////////////

#include <iostream>
//#include <vector> //remove

using namespace std;

template<typename T>

class vector
{
	private:
		int num;
		int capacity = 10;

	public: 
		int getNum()
		{
			return num;
		}
		int getCapacity()
		{
			return capacity;
		}
		
	void doubleCapacity()
		{
			if (num >= capacity)
			{
				T*old= elements;
				capacity = 2*num;
				elements = new T[capacity];
				for (int i=0; i <num; i++)
					elements[i] = old[i];
				delete []old;
			}
		}

		

		vector<T> (int x) //vector with initial size x (places)
		{
			int x = capacity;
			if (x > capacity)
			{
				doubleCapacity();
			}
		}


		vector<T> (int x, T y); //vector with x slots with value of y in each
		{
			x = capacity;

			if (x > capacity)
			{
				doubleCapacity();
			}

			y = elements [i];
		}

		void push_back(int m) //add m value to end of vector
		{
			cin >> m;
			
			if ((num+1) > capacity)
			{ doubleCapacity();
			}
			num++;
		}

		void pop_back() //removes value from vector
		{
			 num--;
		}

		int size() //size of vector, number of elements
		{
			return num;
		}
		
		const int at(int index) //give value at certain point //use pointer
		{
			return *index;
		}


		bool empty() // true if vector is empty
		{
			bool empty;

			if (num = 0)
				{
					empty == true;
				}

			else 
				{
					empty == false;
				}
			
			return empty;
		}

		void clear() //removes all elements from vector
		{
			int num = 0;
		}

		//void swap(vector v2) //swaps contents of this vector with other vector specified (v2)

		vector<int>
		{
			num = 0;
			capacity = 10;
		}

};



int main()
{
	vector <int> intV;

	void push_back(int m);
	void pop_back();
	void clear();
	bool empty();
	void swap();
	const int at();
	unsigned const size();

	
	intV.push_back (2);
	intV.push_back (14);
	cout << "at position 2: " << intV.at(1) << endl;
	intV.pop_back();
	
	for (int i=2; i<12; i++)
	{
		intV.push_back(i+1);
	}

	cout << "number of integers in first vector: " << intV.size() << endl;
	
	vector <int> intV2;
	for (int m=0; m<10; m++)
	{
		intV2.push_back (m+1);
	}
	
	//cout << "Swapped Vector: " << intV.swap(intV2) << endl;

	intV.clear();
	intV.empty();

	cout << "Numbers in final vector: " << intV.size() << endl;

	return 0;
}