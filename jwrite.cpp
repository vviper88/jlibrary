#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc == 1) {
		cout << "No arguments given.\n";
		return 1;
	} else if (argc > 3) {
		cout << "Too many arguments. Consider using quotes around the input text.\n";
		return 1;
	}
	ofstream writingFile(argv[1]);
	writingFile << argv[2];
	writingFile.close();
	return 0;
}
