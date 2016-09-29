#include <iostream>
#include <string>

using namespace std; 
void verifyPassword(char *); 

int main(){


}// END OF MAIN


void verifyPassword(char *password) {
	bool hasNumber = false,
		hasSpecial = false,
		isLong = false,
		hasUpper = false,
		hasLower = false; 
	int pwLength = 0; 
		
	while (*password != '\0') {

		if (isalpha(*password))
			hasNumber = true; 

		if (isupper(*password))
			hasUpper = true; 

		if (islower(*password))
			hasLower = true; 



		pwLength++;
		password++; 
		
	}



}