#include <iostream>

using namespace std;

string getUsername(string input); // returns all text before '@' in email.  assumed only 1 '@' in email.

int main()
{
	string email = "";

	cout << "Enter your email address: ";
	cin >> email;

	cout << getUsername(email) << endl;;
	
}

string getUsername(string input)
{
	/*
	bool correct = false;

	while (!correct)
	{
		cout << "You don't have an '@' sign in your email address.  Check again and retype your email address";
		cin >> input;
	}
	*/

	return input.substr(0, input.find('@'));
}