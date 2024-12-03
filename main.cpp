#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

	cout << "Flight Seating System \n" << "Type  1 for \"First Class.\"\n" << "Type  2 for \"Economy.\"" << endl;

	srand(time(NULL));
	int x[30], a, b;
	cin >> a;
	int sayac1 = 0;
	int sayac2 = 10;

	for (int i = 0; i < 10; i++)
		{
			x[i] = 1 + rand() % 10;
			for (int j = 0; j < i; j++) {
				if (x[i] == x[j])
				{
					i--;
					break;
				}
			}
		} //Rastgele Atama 1
	for (int i = 10; i < 30; i++)
		{
			x[i] = 11 + rand() % 20;
			for (int j = 10; j < i; j++) {
				if (x[i] == x[j])
				{
					i--;
					break;
				}
			}
		} //Rastgele Atama 2
	if (a != 1 && a != 2)
	{
		for (;;) {
			cout << "Sorry, that choice is invalid." << endl;
			cin >> a;
			if (a == 1 || a == 2)
				break;
		}
	}
	do {
		do {
			if (a == 2)break;//ilk baþta economy üretmemesini engellemek için.
			if (sayac1 < 10) {
				cout << "\t---Boarding Pass---" << endl;
				cout << "Seat Number: " << x[sayac1] << endl;
				cout << "Section: First Class" << endl;
				sayac1++;
				cout << "Type  1 for \"First Class.\"\n" << "Type  2 for \"Economy.\"" << endl;
				cin >> a;
				if (a != 1 && a != 2)
				{
					for (;;) {
						cout << "Sorry, that choice is invalid." << endl;
						cin >> a;
						if (a == 1 || a == 2)
							break;
					}
				}
			}
			else
			{
				if (sayac2 < 30)
				{
					cout << "First Class is Full. Would you like a seat in Economy Class? For \"Yes\" Press \"1\" For \"No\" Press \"2\"" << endl;
					cin >> b;
					if (b == 1)
					{
						a == 2;
						break;
					}
					else if (b == 2) {
						cout << "The next flight leaves in 3 hours." << endl;
						return 0;

					}
					else {
						do {
							cout << "Sorry, that choice is invalid." << endl;
							cin >> b;
						} while (b != 1 && b != 2);
						if (b == 1)
						{
							a == 2;
							break;
						}
						if (b == 2) {
							cout << "The next flight leaves in 3 hours." << endl;
							return 0;
						}
					}
				}

				else {
					cout << "This flight's capacity is full. The next flight leaves in 3 hours." << endl;
					return 0;
				}
			}
		} while (a == 1);
		do {
			if (sayac2 < 30) {
				cout << "\t---Boarding Pass---" << endl;
				cout << "Seat Number: " << x[sayac2] << endl;
				cout << "Section: Economy Class" << endl;
				sayac2++;
				cout << "Type  1 for \"First Class.\"\n" << "Type  2 for \"Economy.\"" << endl;
				cin >> a;
				if (a != 1 && a != 2)
				{
					for (;;) {
						cout << "Sorry, that choice is invalid." << endl;
						cin >> a;
						if (a == 1 || a == 2)
							break;
					}
				}
			}
			else
			{
				if (sayac1 < 10) {
					cout << "Economy Class is Full. Would you like a seat in First Class? For \"Yes\" Press \"1\" For \"No\" Press \"2\"" << endl;
					cin >> b;
					if (b == 1) {
						a == 1;
						break;
					}
					else if (b == 2) {
						cout << "The next flight leaves in 3 hours." << endl;
						return 0;
					}
					else {
						do {
							cout << "Sorry, that choice is invalid." << endl;
							cin >> b;
						} while (b != 1 && b != 2);
							if (b == 2) {
								cout << "The next flight leaves in 3 hours." << endl;
								return 0;
							}
						}
					}
				
				else {
					cout << "This flight's capacity is full. The next flight leaves in 3 hours." << endl;
					return 0;
				}
			}
		} while (a == 2);
	} while (a == 1 || a == 2);
	return 0;
}//end main
