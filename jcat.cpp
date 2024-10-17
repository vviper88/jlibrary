#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc == 1) {
		cout << "No arguments given.\n"; 
		return 1;
	} else if (argc > 2) {
		cout << "Too many arguments given.\n";
		return 1;
	}
	
	string fileName = argv[1];
	string fileOut;
	ifstream myFile(fileName);
	while (getline (myFile, fileOut)) {
		cout << fileOut << endl;
	}

	myFile.close();
	return 0;
}	
