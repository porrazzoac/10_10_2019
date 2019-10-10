// 10_10_2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char fullname[100];
	char *lastname = NULL;
	
	cout << "please enter your full name" << endl;
	cin.getline(fullname, 100);

	lastname = fullname;
	

	while (*lastname != ' ')
	{
		lastname++;
	}
	*lastname = '\0';
	lastname++;
	cout << fullname << endl;
	cout << lastname << endl;



	system("pause");
	return 0;
}

