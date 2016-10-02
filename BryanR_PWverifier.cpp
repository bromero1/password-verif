#include <iostream>
/*
! = 33-
@ = 64
# = 35
$ =36 
% =37
author: Bryan Romero 
date: 9/29/16
cit 237 

This program passes a C-String to a verifcation function. 
verifyPassword() reads each character of a c-string. If a constraint is met (a number, upper case, etc.), a flag is set 
and if all are met and six or more characters are in the c-string, the password is valid.

*/
using namespace std;
void verifyPassword(char *);

int main() {
	const int SIZE = 20;


	//test "passwords"
	char name[SIZE] = "Brya!n1";
	char name1[SIZE] = "bryan";
	char name2[SIZE] = "Bryan1";
	char pw3[50] = "A very unpredictable password.";


	//pass each password to function for verification
	verifyPassword(name);
	verifyPassword(name1);
	verifyPassword(name2);
	verifyPassword(pw3);

	cout << "\n\n";
	system("pause");
}// END OF MAIN


void verifyPassword(char *password) {

	bool hasNumber = false,
		hasSpecial = false,
		isLong = false,			//Flags for each condition
		hasUpper = false,
		hasLower = false,
		isInRange = false; 

	unsigned short pwLength = 0, i = 0;

	cout << "You entered: "; //just to see what string is being processed.

	//TEST EACH CHARACTER IN STRING FOR VALIDITIY
	while (*password != '\0' ) {
		cout << *password;

		if (*password == '!'|| *password == '#' || *password == '$' || *password == '@' || *password == '%') //|| '#' || '$' || '@' || '%'
			hasSpecial = true; 

		if (isupper(*password))
			hasUpper = true;

		if (islower(*password))
			hasLower = true;

		if (isdigit(*password)) {
			hasNumber = true;
		}



		pwLength++; //Character count for string
		++password; //Iterate through the string

	}
	//check if pw is long enough
	if (pwLength >= 6)
		isLong = true; 

	if (hasNumber && hasUpper && hasLower && isLong && hasSpecial)
		cout << "\nPassword is valid.";
	else {
		cout << "\nPassword requires: ";
		if (hasSpecial == false)
			cout << " A special character [!,#,$,%,@],";
		if (isLong == false)
			cout << " 6+ characters,";
		if (hasNumber == false)
			cout << " number,";
		if (hasUpper == false)
			cout << " uppper case,";
		if (hasLower == false)
			cout << " lower case,";

	}
	cout << "\n\n";
}