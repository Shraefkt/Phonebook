#ifndef CONTACT_H
#define CONTACT_H
#pragma once
class Contact
{
private:
	char firstName[100];
	char lastName[100];
	char nickName[100];
	char emailAddress[100];
	char phoneNumber[100];
	char birthdayDate[100];
	char favouriteMeal[100];
	char darkestSecret[1000];
public:
	void Add();
	void Show();
	bool Find(char keyw[100]);

};

#endif