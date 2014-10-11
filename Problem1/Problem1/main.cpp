//This is an consol-application for calculating the sum of all multiples of 3 and 5 for a given limit

#include <iostream>
using namespace std;

int main()
{	
	//variable for calculating the sum
	int sum = 0;
	//variable for the limit
	int limit = 0;

	//asking for limit
	cout << "Please enter the limit for calculation:" << endl;
	cin >> limit;

	//calculate the sum of all multiples < limit
	for (int i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << sum;
	return 0;

}