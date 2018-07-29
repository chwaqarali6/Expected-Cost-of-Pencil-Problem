#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	float CurrentCost = 0, Years = 0, Rate = 0, Count = 1, Increase = 0, FinalCost = 0;

	//Taking Input
	cout << "Please Enter The Current Price Of Pencil:- ";
	cin >> CurrentCost;
	cout << "Please Enter The Number Of Years After Which It Would be Purchased:- ";
	cin >> Years;
	cout << "Please Enter Rate At Which The Price Increases:- ";
	cin >> Rate;

	//Saving CurrentCost In FinalCost To Get New Increased Price On Every Previous Price
	FinalCost = CurrentCost;

	//Loop To Calculate The Increasing Price Every Year
	while (Count <= Years)
	{
		Increase = Increase + ((FinalCost*Rate) / 100);
		FinalCost = CurrentCost + Increase;
		Count++;
	}

	//Final Cost
	cout << endl << "The Price After " << Years << " Years Would Be " << FinalCost;

	_getch();
}