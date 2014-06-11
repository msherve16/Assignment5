/////////////////////////
//Morgan Sherve
//June 11, 2014
//Assignment 12.25
///////////////////////
#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Transaction
{
public:
	string Date;
	char Type;
	double Amount;
	double Balance;
	string Description;
private:
	Transaction(string Date, char Type, double Balance, string Description);
	

};


class Account
{private: 
	int Id;
	double Balance;
	static double AnnualInterestRate;
	string customer;
	
public: 
	Account(string customer, int Id, double Balance, double AnnualInterestRate);
	Account ()
	{
		customer = "Joe";
		Id = 0;
		Balance = 0;
		AnnualInterestRate = 0;
	}

	int getId();
	double getBalance();
	string getCustomer()
	{
		return customer;
	}

	double getAnnualInterestRate()
	{
		return AnnualInterestRate;
	}


	void setId();
	void setBalance();
	void setAnnualInterestRate();

	double getMonthlyInterestRate()
	{
		getAnnualInterestRate();
		return AnnualInterestRate/ 12;
	}
	
	//VECTOR
		vector<Transaction>transactions;

		double withdraw(double amount)
		{
			double NewWithdrawl;
			NewWithdrawl = Balance - amount;
		
			if(Balance != NewWithdrawl)
			{
				for (int i = 0; i < 100; i++)
				{
					transactions.clear(); //clear vector
					transactions.push_back(i+1); // show number of transactions
				}
			}
			return NewWithdrawl;
		}

		double deposit(double amount)
		{
			double NewDeposit;
			NewDeposit = Balance + amount;

			
			if(Balance != NewDeposit)
			{
				for (int i = 0; i < 100; i++)
				{
					transactions.clear();
					transactions.push_back(i+1);
				}
			}
			return NewDeposit;
		}

			
};



int main()
{

	Account A1 ("George", 1122, 1000, 1.5);
	cout << "Customer name: "<< A1.getCustomer() << endl;
	cout << "Annual Interest Rate: " << A1.getAnnualInterestRate() << "%" << endl;
	cout << "New  Balance: " << A1.withdraw(5) << endl;
	cout << "New  Balance: " << A1.withdraw(4) << endl;
	cout << "New  Balance: " << A1.withdraw(2) << endl;
	cout << "New Balance: " << A1.deposit(30) << endl;
	cout << "New Balance: " << A1.deposit(40) << endl;
	cout << "New Balance: " << A1.deposit(50) << endl;
	cout << "Number of Transactions: " << A1.transactions.size() << endl;

	return 0;
}
