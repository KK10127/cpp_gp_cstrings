/*
	Jay Montoya
	Evan Stewart
	Sabad Sanchez
	Emiliia Dyrenkova
	Dennis La
	
	PROBLEM STATEMENT: Create a program that will demonstrate the declaration, 
	initialization, and use of C-Strings. Assume you are attempting to tutor
	and work with a beginning C++ student. Use the four methods on page 827. 
	Use 4 methods listed on the given web page.
	Research and incorporation two String/Numeric conversions.

	ALGORITHM: 
		CREATE 5 c-strings initialized to the names of the programmers
		OUTPUT the c-strings to the console
		OUTPUT the length of the C-string for Jay (not including the null terminator) (user strlen)
		OUTPUT the concatination of two c-strings for Evan and Sabad. (use strcat)
		OUTPUT the copying of Emilia into Dennis (use strcpy)
		OUTPUT the comparison result of the emilia c-string to the evan c-string (strcmp)
		
		USE strstr()
		USE strchr()
		USE strtok()
		USE strspn()
		
		CREATE an integer cstring and convert to integer. OUTPUT.
		CREATE a double cstring and convert to double. OUTPUT.
*/

#include <iostream> 
#include <cstring>
#include <stdlib.h>
using namespace std;
int main() {
	cout << "Welcome to the demo of the cstring group project!" << endl << endl;
	
	cout << "Creating 5 cstrings (one for each programmer in this challenge)..." << endl;
	
	// create 5 cstrings
	char jay[] = "Jay Montoya";
	char evan[] = "Evan Stewart";
	char sabad[] = "Sabad Sanchez";
	char emilia[] = "Emilia Dyrenkova";
	char dennis[] = "Dennis La";
	
	// output the strings
	cout << jay << endl << evan << endl << sabad << endl << emilia << endl << dennis << endl << endl;

	// output the length of the cstring for jay
	cout << "Length of: " << jay << " (" << strlen(jay) << ")" << endl << endl;
	
	// concatenation
	cout << "Concatenating sabad to the end of evan: " << strcat(evan, sabad) << endl;
	cout << "\tprinting evan to show evan is changed: " << evan << endl;
	cout << "\tprinting sabad to show sabad is not changed: " << sabad << endl << endl;
	
	// copy emilia into another cstring
	cout << "Copying emilia into another empty cstring: " << endl;
	char emptycstring[40]; 
	strcpy(emptycstring, emilia);
	cout << "\tPrinting emilia to show emilia is unchanged: " << emilia << endl;
	cout << "\tPrinting the new cstring to show it IS changed: " << emptycstring << endl << endl;
	
	// compare emilia to evan using strcmp
	cout << "Result of comparing emilia to evan: " << strcmp(emilia, evan) << endl << endl;
	
	// using strstr()
	cout << "Changing dennis last name to Lo: " << endl;
	cout << "\tbefore: " << dennis <<  endl;
	
	char * ln;
	ln = strstr(dennis, "La");
	strncpy(ln, "Lo", 2);
	
	cout << "\tafter: " << dennis << endl << endl;
	
	// use strchr()
	cout << "Finding the first occurence of 'a' in sabad: ";
	
	char * occ;
	occ = strchr(sabad, 'a');
	if(occ != NULL) {
		cout << "at position " << occ-sabad << endl << endl;
	}

	// strtok
	cout << "Splitting dennis into tokens: " << dennis <<  endl;
	
	char * tok;
	tok = strtok(dennis, " ");
    
    while(tok != NULL) {
    	printf("%s\n", tok);
    	tok = strtok(NULL, " ");
	}
	
	cout << endl;
	
	// using str span
	char test[] = "134hello world";
	cout << "Finding the length of the first occurence of a number in " << test << endl;
	
	int i;
    char cset[] = "1234567890";
    
    i = strspn(test, cset);
    cout << "\tthe first number in the cstring has " << i << " digits!" << endl << endl;
    
	// creating and converting an int
	char one[] = "1";
	i = atoi(one);
	cout << "Converting " << one << " into an integer -> " << i << endl << endl; 
	
	// creating and converting a double
	char twopointthree[] = "2.3";
	float x = atof(twopointthree);
	cout << "Converting " << twopointthree << " into a double -> " << x << endl << endl;
	
	// conclude
	cout << "\nThis concludes the demo for this project." << endl;
	
	
	return 0;
}
