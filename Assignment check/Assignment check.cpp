/*Question 3.2. */
/*This program will calculate the discount the user gets based on quantity on products bought. */
#include <iostream>
using namespace std;
int main()
{
	double quant, proPrice, subPrice, disPrice, totPrice;
	/*The program must ask the price for the product. */
	cout << "How much is the product?" << endl;
	cin >> proPrice;
	/*The program must ask the quantity the user is buying. */
	cout << "Enter the quantity of products being bought." << endl;
	cin >> quant;
	/*An IF-else statement must be used to seperate the quantity percentage off. */
	if (quant > 50) /*If more than 50 products are bought there is a 30% off. */
	{
		cout << "There is a 30% discount." << endl;
		subPrice = proPrice * quant;
		disPrice = subPrice * 0.30;
		totPrice = subPrice - disPrice; /*Calcualtion must be done to find the total price with the
		discount. */
		cout << "The total price is: " << totPrice << endl;
	}
	else if (quant > 40) /*If more than 40 products are bought there is a 20% discount. */
	{
		cout << "There is a 20% discount." << endl;
		subPrice = proPrice * quant;
		disPrice = subPrice * 0.20;
		totPrice = subPrice - disPrice;
		cout << "The total price is: " << totPrice << endl;
	}
	else if (quant > 30) /*If more than 30 products are bought there is a 15% discount. */
	{
		cout << "There is a 15% discount." << endl;
		subPrice = proPrice * quant;
		disPrice = subPrice * 0.15;
		totPrice = subPrice - disPrice;
		cout << "The total price is: " << totPrice << endl;
	}
	else if (quant > 20) /*If more than 20 products are bought there is a 10% discount. */
	{
		cout << "There is a 10% discount." << endl;
		subPrice = proPrice * quant;
		disPrice = subPrice * 0.10;
		totPrice = subPrice - disPrice;
		cout << "The total price is: " << totPrice << endl;
	}
	else /*If the quantity does not apply for any of the above senarios there will be no discount. */
	{
		cout << "No discount." << endl;
		totPrice = proPrice * quant;
		cout << "The total price is: " << totPrice << endl;
	}
	return 0;
}
