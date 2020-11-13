using namespace std;

#include <fstream>
#include "mainheader.h"
#include <iostream>

	void zahlen::formateingabe() {

		do {

		cout << "In welchem Zahlensystem wollen Sie ihre Zahl eingeben?" << endl;
		cout << "Hexadezimal: h" << endl;
		cout << "Dezimal: d" << endl;
		cout << "Oktal: o" << endl;
		cin >> format;

		if (format != 'd' && format != 'h' && format != 'o') {

			cout << endl << "Bitte einen der Buchstaben eingeben!" << endl;

			}

		} while (format != 'd' && format != 'h' && format != 'o');
	}

	void zahlen::zahleingabe() {

			cout << endl << "Geben Sie ihre Zahl ein: ";

			switch (format) {

			case 'h':

				cin >> hex >> zahl;

			break;

			case 'd':

				cin >> dec >> zahl;

			break;

			case 'o':

				cin >> oct >> zahl;

			break;

			}
	}

	void zahlen::zahlausgabe() {

		cout << "\nDie Zahlen sind:" << endl;

		cout << "Hexadezimal: " << hex << zahl << endl;
		cout << "Dezimal: " << dec << zahl << endl;
		cout << "Oktal: " << oct << zahl << endl;

	}



