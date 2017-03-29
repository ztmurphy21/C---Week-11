//this program writes user input to a file
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;	

int main() {
	ofstream outputFile;
	int num1, num2, num3;

	//open output file
	outputFile.open("numbers.txt");


	//get three nums from user input
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	cout << "Enter one last number: ";
	cin >> num3;

	//write the numbers to the file
	outputFile << num1 << endl;
	outputFile << num2 << endl;
	outputFile << num3 << endl;
	cout << "The numbers were saved to a file.\n";

	//close the file
	outputFile.close();
	cout << "Done.\n";
	_getch();

	return 0;
}