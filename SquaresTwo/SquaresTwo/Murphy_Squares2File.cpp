//CPT-180
//Program: Squares Two
//Purpose: program displays a list of squares as well as
// placing the information in current users My Documents/Documents folder
//Programmer: Zachary Murphy on 3-29-2017

#include <iostream>
#include <fstream> // File access
#include <windows.h> // Window Documents Folder Access
#include <shlobj.h> // Window Documents Folder Access
#include <string>
#include <conio.h> //for getch function
using namespace std;
int main()
{
	// Get special folder "Documents a.k.a. My Documents"
	//Documents vs. My Documents depends on version of windows
	//this will varry
	int ctr = 1;
	int number;
	char currentUserpath[MAX_PATH];
	SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, 0, currentUserpath);

	// Assemble path and filename into a string
	string mypath = currentUserpath; //recast char array to string object
	string myfile = "Murphy_Squares.txt";
	string fileName = mypath + "\\" + myfile;
	ofstream outputFile;
	outputFile.open(fileName);

	// Get the beginning number to be squared from the user
	// Validate that it is between 1 and 100
	cout << "Enter a number between 1 and 100\n";
	cout << "and I will square it and create a table\n";
	cout << "incrementing the base on each row.\n\n";
	cout << "Enter the number: ";
	cin >> number;

	//input error checking
	while (!(number >= 1 && number <= 100))
	{
		cout << "\nERROR! You must enter a number between 1 and 100: ";
		cin >> number;
	}

	//nicely format everything
	cout <<  "***********************************************";
	cout << "\nNumber \t\t\tNumber Squared\n";
	cout << "------------------------------------------------\n";

	//nicely format the output file
	outputFile << "***********************************************\n";
	outputFile << "\t\tSquared Results:\n";
	outputFile << "Number \t\t\tNumber Squared\n";
	outputFile << "------------------------------------------------\n";
	while (ctr <= 10)
	{
		cout << number << "\t\t\t" << (number * number) << endl;
		outputFile << number << "\t\t\t" << (number * number) << endl;
		ctr++;
		number++;
	}
	//formating 
	cout << "***********************************************";
	//end file with consistent format
	outputFile << "***********************************************\n";

	// Close the file
	outputFile.close();

	//tell the user where the file was placed
	cout << "\nI have placed the results in a text file. \n";
	cout << "The location of the text file is " << fileName << "." << endl;

	//allow the user to exit
	cout << "\nPress any key to exit.";
	_getch();

	return 0;
}