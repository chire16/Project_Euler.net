//consol-application for calucating the sum of all even fibonacci numbers for a given limit

#include <iostream>
using namespace std;

//functions
int calc_newfib(int, int);

int main ()
{
	//asing for the limit
	int limit = 0;
	do 
	{
	cout << "Please enter the limit for calculation:" << endl;
	cin >> limit;
	} while(limit <= 0);

	
	int fib_ac = 1;		//actual fib-numb
	int fib_prev = 0;	// previous fib-numb
	int sum = 0;
	int help = 0;

	//calculate the sum and fib-numbers in iterativ way
	while (fib_ac < limit)
	{
		if(fib_ac % 2 == 0)
			sum += fib_ac;

		//calculate new fib-numbs
		help = fib_ac;
		fib_ac = calc_newfib(fib_ac, fib_prev);
		fib_prev = help;	
	}

	cout << sum << endl;
	cin.get();
	cin.get();
	return 0;
}

int calc_newfib(int actual, int previous)
{
	return actual + previous;
}
