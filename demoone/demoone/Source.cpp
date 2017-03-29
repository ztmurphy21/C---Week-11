#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
int main() {
	ofstream outputFile;
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file. \n";

	//wrtie four names to the file.
	outputFile << "Bach\n";
	outputFile << "Beethoven\n";
	outputFile << "Mozart\n";
	outputFile << "Schubert\n";

	//close the file
	outputFile.close();
	cout << "done.\n";
	_getch();
	return 0;
}