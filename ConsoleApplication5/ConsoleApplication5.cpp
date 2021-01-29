#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int ugol1;
	int ugol2;
	cout << "Vvedite znacheniya pervogo i vtorogo uglov: ";
	cin >> ugol1;
	cout << "\n";
	cin >> ugol2;
	if ((ugol1 + ugol2) < 180)
	{
		cout << "treugolnik suschestvuet\n";
		if (ugol1 == 90 || ugol2 == 90 || (180 - ugol1 - ugol2) == 90)

			cout << "treugolnik pryamougolniy\n";

		else

			cout << "treugolnik ne pryamougolniy\n";

	}
	else
		cout << "treugolnik ne suschestvuet";
}
