// zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>;
using namespace std;


int main()
{
	unsigned int num, oldNum;
	cin >> num;
	oldNum = num;

	unsigned int reverseNum = 0;
	int count = 0;
	
	while (oldNum > 0) {
		oldNum /= 10;
		count++;
	}

	while (num > 0) {
		int digit = num % 10;
		reverseNum += digit * pow(10, count-1);
		num /= 10;
		count--;
	}
	
	reverseNum++;

	cout << reverseNum << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
