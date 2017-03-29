//this program calcs charges for dvd rentals
//every third dvd is free
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
	int dvdCount = 1; //dvd counter
	int numDVDs; //num of dvd rents
	double total = 0.0; //accumulator
	char current;//current releas Y or N

	//get the number of DVDs
	cout << "how many DVDs are being rented? ";
	cin >> numDVDs;

	//determine the charges
	do {
		if ((dvdCount % 3) == 0) {
			cout << "DVD #" << dvdCount << " is free!\n";
			continue;// immediately start the next iteration
		}
		cout << "Is DVD #" << dvdCount;
		cout << " a current release? (Y/N) ";
		cin >> current;
		if (current == 'Y' || current == 'y')
			total += 3.50;
		else
			total += 2.50;
	} while (dvdCount++ < numDVDs);

	//display the total.
		cout << fixed << showpoint << setprecision(2);
		cout << "The total is $" << total << endl;
		_getch();
		return 0;
}