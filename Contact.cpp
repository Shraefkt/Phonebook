#include <iostream>
#include "Contact.h"
using namespace std;

void Contact::Add()
{
	cout << "Add Contact Information.\n";
	cout << "First Name: ";
	cin >> firstName;
	cout << endl;

	cout << "Last Name: ";
	cin >> lastName;
	cout << endl;

	cout << "Nick Name: ";
	cin >> nickName;
	cout << endl;

	cout << "Email Address: ";
	cin >> emailAddress;
	cout << endl;

	cout << "Phone Number: ";
	cin >> phoneNumber;
	cout << endl;

	cout << "Birthday date: ";
	cin >> birthdayDate;
	cout << endl;

	cout << "Favourite Meal: ";
	cin >> favouriteMeal;
	cout << endl;

	cout << "Darkest Secret: ";
	cin >> darkestSecret;
	cout << endl;
}

void Contact::Show()
{
	cout << "Information about " << firstName << " " << lastName << endl;
	cout << "First Name: ";
	cout << firstName << endl;

	cout << "Last Name: ";
	cout << lastName << endl;

	cout << "Nick Name: ";
	cout << nickName << endl;

	cout << "Email Address: ";
	cout << emailAddress << endl;

	cout << "Phone Number: ";
	cout << phoneNumber << endl;

	cout << "Birthday date: ";
	cout << birthdayDate << endl;

	cout << "Favourite Meal: ";
	cout << favouriteMeal << endl;

	cout << "Darkest Secret: ";
	cout << darkestSecret << endl;
}

bool Contact::Find(char keyw[100])
{
	bool found = false;
	if (strcmp(keyw, firstName) == 0 || strcmp(keyw, lastName) == 0|| strcmp(keyw, emailAddress) == 0 || strcmp(keyw, phoneNumber) == 0 || strcmp(keyw, birthdayDate) == 0 || strcmp(keyw, favouriteMeal) == 0 || strcmp(keyw, darkestSecret) == 0) {
		found = true;
	}
	return found;
}