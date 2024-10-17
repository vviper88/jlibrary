#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool simpleMode;
	
	if (argc == 1) {
		cout << "";
		return 0;
	} else if (argc == 2) {
		simpleMode = true;
	} else if (argc == 3) {
		simpleMode = false;
	} else if (argc > 3) {
		cout << "Too many arguments.\n";
		return 1;
	}

	if (simpleMode == true) {
		cout << argv[1] << endl;
	} else {
		string firstArgument = argv[1];
		if (firstArgument == "rpt") {
			while (true) {
				cout << argv[2] << endl;
			}
		} else if (firstArgument == "nonl") {
			cout << argv[2];
		} else {
			cout << "Invalid first argument.\n";
			return 1;
		}
	}

	return 0;
}
