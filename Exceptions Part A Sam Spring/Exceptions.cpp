// Sam Spring
// CIS 1202 101
// November 30, 2020
#include <iostream>
using namespace std;

class invalidCharacterException 
{ };
class invalidRangeException 
{ };
char character(char startLetter, int offset) {
	try {
		if (static_cast<int>(startLetter) < 65) 
			throw invalidCharacterException();
		if (static_cast<int>(startLetter) > 122)
			throw invalidCharacterException();
		if (static_cast<int>(startLetter) > 90 && static_cast<int>(startLetter) < 97)
			throw invalidCharacterException();
		if (static_cast<int>(startLetter) + offset < 65)
			throw invalidRangeException();
		if (static_cast<int>(startLetter) + offset > 90 && static_cast<int>(startLetter) + offset < 97)
			throw invalidRangeException();
		if (static_cast<int>(startLetter) + offset > 122)
			throw invalidRangeException();
		return startLetter + offset;
	}
	
	catch (invalidCharacterException) {
		cout << "Invalid character exception";
		return ' ';
	}
	catch (invalidRangeException) {
		cout << "Invalid range exception";
		return ' ';
	}
	
}

int main() {
	cout << character('a', 1);
	cout << endl;
	cout << character('a', -1);
	cout << endl;
	cout << character('Z', -1);
	cout << endl;
	cout << character('?', 5);
	cout << endl;
	
	
		
	
	
}

