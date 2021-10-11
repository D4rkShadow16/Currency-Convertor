#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int dollars;
	float B;
	float M;
	float J;

	SetConsoleTitleA("Currency converter by Errupti0n");

	cout << "Enter currency in American Dollars $$: ";
	cin >> dollars;

	// Calculations
	B = dollars * 0.571505;
	M = dollars * 10.7956;
	J = dollars * 112.212;

	// Output
	cout << dollars << " American dollars are equal to: " << B << " British pounds" << endl;
	cout << dollars << " American dollars are equal to: " << M << " Mexican pesos" << endl;
	cout << dollars << " American dollars are equal to: " << J << " Japanese yen" << endl;

	system("pause");
}