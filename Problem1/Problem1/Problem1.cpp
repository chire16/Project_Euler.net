// Problem1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0;
	int limit = 0;
	cout << "Please enter a limit for calculation!" << endl;
	cin >> limit;

	for (int i = 0; i < limit; i++)
	{
		if (i%3 == 0 || i%5 == 0)
			sum += i;
	}
	cout << sum;
	cin.get();
	cin.get();
	return 0;
}

