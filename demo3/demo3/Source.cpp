//this program reads numbers from a file
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main() {
	ifstream inFile;
	int val1, val2, val3, sum;

	//open file
	inFile.open("numeric.txt");

	//read three numbers from the file
	inFile >> val1;
	inFile >> val2;
	inFile >> val3;

	inFile.close();


	//calc sum
	sum = val1 + val2 + val3;

	//display three numbers
	cout << val1 << endl;
	cout << val2 << endl;
	cout << val3 << endl;
	cout << "The sum is : " << sum;

	_getch();
	return 0;
}