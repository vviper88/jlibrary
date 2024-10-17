#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc > 4) {
		cout << "Too many arguments.\n";
		return 1;
	} else if (argc < 4) {
		cout << "Not enough arguments.\n";
		return 1;
	}

	string operation = argv[1];
	string firstNumberString = argv[2];
	string::size_type sz1;
	string secondNumberString = argv[3];
	string::size_type sz2;
	
	double firstNumber = stod (firstNumberString, &sz1);
	double secondNumber = stod (secondNumberString, &sz2);

	if (operation == "add") {
		cout << (firstNumber + secondNumber) << endl;
	} else if (operation == "sub") {
		cout << (firstNumber - secondNumber) << endl;
	} else if (operation == "mlt") {
		cout << (firstNumber * secondNumber) << endl;
	} else if (operation == "div") {
		cout << (firstNumber / secondNumber) << endl;
	} else {
		cout << "Invalid operation.\n";
		return 1;
	}
	return 0;
}
