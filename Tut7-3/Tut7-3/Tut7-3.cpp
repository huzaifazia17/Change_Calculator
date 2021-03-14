#include<iostream>


using namespace std;

int main()
{
	double num, decimalValue, toonie, loonie, quarters, dime, nickle, penny;
	int num_int;


	cout << "This program converts a sum of currency into the highest available denominations in terms of coins" << endl;
	cout << "Enter an amount:"<< endl;
	cin >> num;

	while (num < 0) {
		cout << "Enter a positive amount:" << endl;
		cin >> num;
	}

	num += 0.005;
	num_int  = (int)num; 
	decimalValue = num - num_int;
	toonie = num_int / 2;
	num_int %= 2;
	loonie = num_int;

	num_int = decimalValue * 100;

	quarters = num_int / 25;
	num_int %= 25;

	dime = num_int / 10; 
	num_int %= 10;

	nickle = num_int / 5;
	num_int %= 5;

	if (num_int == 0 && num_int % 2 != 0) {
		num_int -= 1;
	}


	cout << "Conversion to coins:-" << endl;

	if (toonie != 0)
	{
		cout <<  toonie << "\tToonies ($2)" << endl;
	}
	if (loonie != 0)
	{
		cout <<  loonie << "\tLoonies ($1)" << endl;
	}
	if (quarters != 0)
	{

		cout <<  quarters << "\tQuarters ($0.25)" << endl;
	}
	if (dime != 0)
	{

		cout <<  dime << "\tDimes ($0.1)" << endl;
	}
	if (nickle != 0)
	{
		cout <<  nickle << "\tNickels ($0.05)" << endl;
	}

	if (num_int != 0)
	{
			cout << num_int  << "\tPennies ($0.01)" << endl;
		
	}
	
}

