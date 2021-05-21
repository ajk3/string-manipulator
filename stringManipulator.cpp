// anurag kunwar
// 5/1/2019

// this is a menu driven program

#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;

// constants
const int ELEMENT = 80;
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;
const int NINE = 9;
const int MAX = 5;

// function prototype
void stringInput(char[], char[]);
void replaceOne(char[]);
void replaceMultiple(char[]);
void changeCase(char[]);
void reverse(char[]);
void reset(char[], char[]);
void insertSingle(char[]);
void removeCharacter(char[]);
bool exit();

int main()
{

	int choice; // variable to hold choice

	char inputString[ELEMENT] = { };
	char copyString[ELEMENT] = { }; // for copying the string

	do
	{
		cout << " String Editor Menu " << endl;
		cout << "\t1-Input a string" << endl;
		cout << "\t2-Replace a single element in string " << endl;
		cout << "\t3-Replace Multiple Element in String" << endl;
		cout << "\t4-Change Case of Element in String" << endl;
		cout << "\t5-Insert Single Element in String" << endl;
		cout << "\t6-Remove Single ELement in String" << endl;
		cout << "\t7-Reverse String" << endl;
		cout << "\t8-Reset To original String" << endl;
		cout << "\t9-Exit" << endl << endl;


		cout << " Please Enter in the choice: ";
		cin >> choice;

		switch (choice)
		{
		case ONE:
		{
			stringInput(inputString, copyString);
			cout << endl;

			break;
		}

		case TWO:
		{
			if (strlen(inputString) == 0)  // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				replaceOne(inputString); // calling function
			break;
		}

		case THREE:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				replaceMultiple(inputString); // calling function
			break;
		}

		case FOUR:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				changeCase(inputString); // calling function
			break;
		}

		case FIVE:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				insertSingle(inputString); // calling function
			break;
		}

		case SIX:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				removeCharacter(inputString); // calling function
			break;
		}

		case SEVEN:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				reverse(inputString); // calling function
			break;

		}

		case EIGHT:
		{
			if (strlen(inputString) == 0) // to make sure string is entered
			{
				cout << " ERROR - No string detectd please select option 1 " << endl << endl;
			}
			else
				reset(copyString, inputString); // calling function
			break;
		}
		case NINE:
		{
			break;
		}
		default:

			cout << "Error!!! Make sure that you have Selected a correct option" << endl;

		}
	} while (choice != NINE || !exit());

	system("pause");
	return 0;
}

// function defn for string input
void stringInput(char inputString[], char copyString[])
{

	int	lenString;
	cin.ignore();
	cout << " Please Enter in the string: ";
	cin.getline(inputString, ELEMENT);

	int len; // to hold length of string

	len = strlen(inputString);
	cout << " The Test String is " << " ' " << inputString << " ' " << " and has length of " << len;
	cout << endl;

	for (int i = 0; i < strlen(inputString); i++)
	{
		copyString[i] = inputString[i];
	}
}

// function defn for replace one
void replaceOne(char test[])
{
	cin.ignore();
	int lenOfString;
	int replace;
	int len;
	char toReplace;

	cout << " Enter the character number in the string holding the charcater to replace: ";
	cin >> replace;


	len = strlen(test);
	while (replace <= 0 || replace > len) // validating
	{
		if (replace == 0)
		{
			cout << "Error!!! Number can't be 0  " << endl;
			cout << " Enter the character number in the string holding the charcater to replace: ";
			cin >> replace;
		}
		else if (replace < 0)
		{
			cout << "Error!!! Number can't negative " << endl;
			cout << " Enter the character number in the string holding the charcater to replace: ";
			cin >> replace;
		}
		else
		{
			cout << "Error!!! Number can't be more than number of character  " << endl;
			cout << " Enter the character number in the string holding the charcater to replace: ";
			cin >> replace;
		}
	}

	cin.ignore();
	cout << " Please Enter in a single charcater: ";
	cin.get(toReplace);


	test[replace - 1] = toReplace; // replacing

	lenOfString = strlen(test);
	cout << endl;
	cout << " character Replaced Sucessfully!!" << endl;
	cout << " The new String is " << " ' " << test << " ' " << " and has length of " << lenOfString << endl;
	cout << endl;
	return;

}

// function defn for exit
bool exit()
{
	char choice;
	char upperChoice;

	cin.ignore();
	cout << " Do you wish to exit program (Y/N) ";
	cin.get(choice);

	upperChoice = toupper(choice);

	while (upperChoice != 'Y' &&  upperChoice != 'N')
	{
		cout << " please make a valid choice!! " << endl;
		cout << " please choose (Y/N) ";
		cout << endl;
		cin.ignore();
		cout << "  Do you Want To Exit the program: ";
		cin.get(choice);
		upperChoice = toupper(choice);
	}

	if (upperChoice == 'Y')
	{
		cout << endl;
		return true;
	}
	else if (upperChoice == 'N')
	{
		cout << endl;
		return false;
	}
}

// function defn for replace multiple
void replaceMultiple(char string[])
{
	char character;
	char charReplace;
	int numreplaced = 0;
	cin.ignore();
	cout << " Enter in the character from the current String: ";
	cin.get(character);
	// cout << endl;

	cin.ignore();
	cout << " Enter in the  replacement character: ";
	cin.get(charReplace);
	cout << endl;

	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == character)
		{
			string[i] = charReplace;
			numreplaced += 1;  // counting chracter replaced
		}
	}

	cout << " " << numreplaced << " Character is replaced in the string " << endl;
	cout << " The current content of string is " << " ' " << string << " ' " << endl;
	cout << " The lenght of the string is " << strlen(string);
	cout << endl << endl;
	return;
}


// // function defn for change case
void changeCase(char string[])
{

	cin.ignore();
	char caseChange;
	char upperChange;
	cout << " Do you want to change all letter to upercase or lowercase? (U or L): ";
	cin.get(caseChange);

	upperChange = toupper(caseChange);

	while (upperChange != 'U' &&  upperChange != 'L') // validating
	{
		cout << "Error!!! please make a valid choice!! " << endl;
		cout << " please choose (U/L) ";
		cout << endl << endl;
		cin.ignore();
		cout << " Do you want to change all letter to upercase or lowercase? (U or L): ";
		cin.get(caseChange);
		upperChange = toupper(caseChange);

	}

	if (upperChange == 'L')
	{
		for (int i = 0; i < strlen(string); i++)
		{
			string[i] = tolower(string[i]);
		}

		cout << " All letters are changed to lower case " << endl;
		cout << " The current content of string is " << " ' " << string << " ' " << endl;
		cout << " The lenght of the string is " << strlen(string);
		cout << endl << endl;
	}
	else if (upperChange == 'U')
	{
		for (int i = 0; i < strlen(string); i++)
		{
			string[i] = toupper(string[i]);
		}

		cout << " All letters are changed to upper case " << endl;
		cout << " The current content of string is " << " ' " << string << " ' " << endl;
		cout << " The lenght of the string is " << strlen(string);
		cout << endl << endl;

	}
}

// function defn for reverse string
void reverse(char string[])
{
	cin.ignore();
	int j = 0;
	char reverse[ELEMENT] = { };

	int k = strlen(string);
	int i = k;
	for (int j = 0; j < k; j++)
	{
		if (i >= 0)
		{
			reverse[j] = string[i - 1];
			i--;
		}
	}
	for (int i = 0; i < strlen(reverse); i++)
	{
		string[i] = reverse[i];
	}

	cout << " String is reversed Sucessfully!! " << endl;
	cout << " the reverse is " << " ' " << string << " ' " << " and has a length of " << strlen(string);


	cout << endl << endl;
}

// function defn for  reset string 
void reset(char pointer[], char original[])
{
	char choice;
	char upperChoice;

	cin.ignore();
	cout << " Do you wish to reset your string (Y/N): ";
	cin.get(choice);

	upperChoice = toupper(choice);

	while (upperChoice != 'Y' &&  upperChoice != 'N')
	{
		cout << " please make a valid choice!! " << endl;
		cout << " please choose (Y/N): ";
		cout << endl;
		cin.ignore();
		cout << "  Do you Wish to reset your string: ";
		cin.get(choice);
		upperChoice = toupper(choice);
	}

	if (upperChoice == 'Y')
	{
		cout << " Reset Sucessfull!!! " << endl;
		cout << " Your original string is " << " ' " << pointer << " ' " << " and has lenght of " << strlen(pointer) << endl;
		cout << endl;

		for (int i = 0; i < strlen(pointer); i++)
		{
			original[i] = pointer[i];
		}
		return;
	}
	else if (upperChoice == 'N')
	{
		cout << endl;
		return;
	}


}


// function defn for insert single char
void insertSingle(char inputString[])
{

	//char character;
	char stringCopy[ELEMENT] = { };
	char charinsert;
	int replace = 0;
	cin.ignore();
	cout << " Enter in the a single character: ";
	cin.get(charinsert);


	for (int i = 0; i <= strlen(inputString); i++) // copying a string
	{
		stringCopy[i] = inputString[i];
	}

	cout << " Enter the character number after which a new character will be inserted: ";
	cin >> replace;


	int len = strlen(inputString);
	while (replace <= 0 || replace > len) // validating
	{
		if (replace == 0)
		{
			cout << "Error!!! Number can't be 0  " << endl;
			cout << " Enter the character number after which a new character will be inserted: ";
			cin >> replace;
		}
		else if (replace < 0)
		{
			cout << "Error!!! Number can't negative " << endl;
			cout << " Enter the character number after which a new character will be inserted: ";
			cin >> replace;
		}
		else
		{
			cout << "Error!!! Number can't be more than number of character  " << endl;
			cout << " Enter the character number after which a new character will be inserted: ";
			cin >> replace;
		}
	}

	inputString[replace] = charinsert; // insertting new character


	// adding character after new character from copied dtring
	for (int j = (replace);j <= strlen(stringCopy); j++)
	{
		inputString[j + 1] = stringCopy[j];
	}

	inputString[strlen(stringCopy) + 1] = '\0';

	cout << " Character is insreted in the string!! " << endl;
	cout << " " << inputString << "  is the new string " << endl;
	cout << " The lenght of the string is " << strlen(inputString);
	cout << endl << endl;
	return;
}

// function defn for removing single char
void removeCharacter(char input[])
{
	int choice;
	cin.ignore();
	cout << " Enter in the character number to be removed: ";
	cin >> choice;

	int len = strlen(input);
	while (choice <= 0 || choice > len) // validating
	{
		if (choice == 0)
		{
			cout << "Error!!! Number can't be 0  " << endl;
			cout << " Enter in the character number to be removed: ";
			cin >> choice;

		}
		else if (choice < 0)
		{
			cout << "Error!!! Number can't negative " << endl;
			cout << " Enter in the character number to be removed: ";
			cin >> choice;

		}
		else
		{
			cout << "Error!!! Number can't be more than number of character  " << endl;
			cout << " Enter in the character number to be removed: ";
			cin >> choice;

		}
	}

	for (int i = choice; i < strlen(input); i++)
	{
		input[i - 1] = input[i];
	}

	input[len - 1] = '\0'; // placing null terminator

	cout << " Character removed from the string!! " << endl;
	cout << " " << input << "  is the new string " << endl;
	cout << " The lenght of the string is " << strlen(input);
	cout << endl << endl;
}
