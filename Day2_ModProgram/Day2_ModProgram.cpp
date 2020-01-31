/*
CSCI 182 - Assignment 1
Day2_ModProgram.cpp
Manually Create a mod function for use

Charlie MacIntire
v1.0 1/29/2020
*/

#include <iostream>

// Get the min value of two input values
int GetMinValue(int valueA, int valueB)
{
	if (valueA < valueB)
		return valueA;
	else
		return valueB;
}

int main()
{
	//    std::cout << "Hello World!\n"; 
	int a = 400;
	int b = 220;

	// Find the minimum value and pretty print it to the screen
	std::cout << "Min Value: " << GetMinValue(a, b) << "\n";

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
