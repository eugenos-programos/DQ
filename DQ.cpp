#include <iostream>
#include <string>
#include <cstring>
#include "Header.h"

using namespace std;

int main(int argc, char* argv[])
{
	Dequeue D;
	if (argc == 0 || argc == 1)cout << "error";
	if (string(argv[1]) == "testing_for_push_front") {
		D.push_front(1);
		D.push_front(2);
		D.push_front(3);      // | 4 | 3 | 2 | 1 |
		D.push_front(4);
		D.print();
		D.clear();
	}
	if (string(argv[1]) == "testing_for_push_back") {
		D.push_back(1);
		D.push_back(2);
		D.push_back(3);        // | 1 | 2 | 3 | 4 |
		D.push_back(4);
		D.print();
		D.clear();
	}
	if (string(argv[1]) == "testing_for_pop_front") {	
		D.push_back(1);
		D.push_back(2);
		D.push_front(3);   
		D.push_front(4);   // | 4 | 3 | 1 | 2 |
		D.pop_front();         // | 3 | 1 | 2 |
		D.print();
		D.clear();
	}
	if (string(argv[1]) == "testing_for_pop_back") {
		D.push_back(1);
		D.push_back(2);
		D.push_front(3);
		D.push_front(4);   // | 4 | 3 | 1 | 2 |
		D.pop_back();      // | 4 | 3 | 1 |
		D.print();           
		D.clear();
	}
	if (string(argv[1]) == "menu") {
		int comand;
		int x;
		cout << "1 - push_front / 2- push_back / 3- pop_front / 4- pop_back / 5- size / 6 - clear / 7 - exit / 8 - print" << endl;
		while (cin >> comand) {
			if (comand == 1) {
				cin >> x;
				D.push_front(x);
				cout << "ok\n";
			}
			if (comand == 2) {
				cin >> x;
				D.push_back(x);
				cout << "ok\n";
			}

			if (comand == 3) {
				if (D.empty())
					cout << "error\n";
				else {
					cout << "ok" << endl;
					D.pop_front();
				}

			}
			if (comand == 4) {
				if (D.empty())
					cout << "error\n";
				else {
					cout << "Ok\n";
					D.pop_back();
				}
			}
			if (comand == 5) {
				cout << D.size() << "\n";
			}
			if (comand == 6) {
				D.clear();
				cout << "ok\n";
			}
			if (comand == 7) {
				cout << "bye\n";
				return 0;
			}
			if (comand == 8) {
				D.print();
			}
		}
	}
	return 0;
}