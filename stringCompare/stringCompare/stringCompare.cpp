// stringCompare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int strcmp_case_insensitive(string str1, string str2) {
	for (int i = 0; i < str1.length(); i++) {

	}
	
	
	
	return str1.compare(str2);
}


int main()
{
	//defining the strings
	string firstString;
	string secondString;
	
	// getting the user's input on the first string
	cout << "first string:\n";
	getline(cin, firstString);
	cout << "\n";
	
	// getting the user's input on the second string
	cout << "second string:\n";
	getline(cin, secondString);
	cout << "\n";

	//comparing them using the function
	int result = strcmp_case_insensitive(firstString, secondString);

	//gving the user a response depending on what the function returns

	if (result > 0) {
		cout << firstString + " > " + secondString + "\n";
	}
	else if (result == 0) {
		cout << firstString + " == " + secondString + "\n";
	}
	else if (result < 0) {
		cout << firstString + " > " + secondString + "\n";
	}

}


