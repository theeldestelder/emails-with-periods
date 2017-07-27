#include <iostream>

using namespace std;

string getUsername(string input); // returns all text before '@' in email.  assumed only 1 '@' in email.
void addPeriods(string input); // void for now

int main()
{
	string email = "";

	cout << "Enter your email address: ";
	cin >> email;

	//cout << getUsername(email) << endl;;

	string username = getUsername(email);
//	cout << username << endl;

	addPeriods(username);
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

void addPeriods(string input) // takes an input string and inserts periods at every possible space in the input string
{
	int length = input.length();
	string original = input;

	for(int i = 1; i < length; i++) // start after first character
	{
		cout << input.insert(i, ".") << endl;
		input = original;
	}
}