#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "Header.h"

using namespace std;
Dequeue D;

int main(int argc, char* argv[])
{
	D.push_back(2);
	D.push_back(4);
	D.push_front(2);
	D.push_front(3);   // D = 3 2 2 4
	if (argc == 0 || argc == 1)exit(1);
	if (string(argv[1]) == "push_front") {
		if (argv[2] == NULL) {
			cout << "Error";
			exit(1);
		}
		int n;
		n = atoi(string(argv[2]).c_str());
		D.push_front(n);          // D = n 3 2 2 4
		D.print();
	}
	if (string(argv[1]) == "push_back") {
		if (argv[2] == NULL) {
			cout << "Error";
			exit(1);
		}
		if (argv[2] == NULL)exit(1);
		int n;
		n = atoi(string(argv[2]).c_str());
		D.push_back(n);          // D = 3 2 2 4 n
		D.print();
	}
	if (string(argv[1]) == "pop_front") {	
		D.pop_front();          // D = 2 2 4
		D.print();
	}
	if (string(argv[1]) == "pop_back") {
		D.pop_back();          // D = 3 2 2 
		D.print();
	}
	if (string(argv[1]) == "menu") {
		D.clear();
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