#include <iostream>
#include <string>
using namespace std;

int main() {
	//Creates a string variable and prints the contents
	string str = "Hello";
	cout << "String: " << str << endl;

	//Creates a character pointer variable, initializes the variable and prints the contents
	char* ch = new char;
	*ch = 'a';
	cout << "Character: " << *ch << endl;

	//Creates an int variable and asks user to enter which index of the string (s)he would like to swap with the character
	int num;
	cout << "Enter a number between 1 and 5: ";
	cin >> num;
	cout << endl;
	
	//Determines if num is out of bounds
	if (num > 5 || num < 1) {
		cout << "This number is out of bounds.";
	}
	//If num is in bounds, replace the character in the index that num specifies with ch. Also, prints the modified string.
	else {
		str.replace((size_t)num-1, (size_t)1, (size_t)1, *ch);
		cout << "Modified string: " << str << endl;
	}
	
	//Deletes ch
	delete ch;

	cin.get();
	cin.ignore();
	return 0;
}