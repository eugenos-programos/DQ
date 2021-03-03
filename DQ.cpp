#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
	Dequeue D;
	string comand;
	int x;
	cout << "push_front / push_back / pop_front / pop_back / size / clear / exit / print" << endl;
	while (cin >> comand) {
		if (comand == "push_front") {
			cin >> x;
			D.push_front(x);
			cout << "ok\n";
		}
		if (comand == "push_back") {
			cin >> x;
			D.push_back(x);
			cout << "ok\n";
		}

		if (comand == "pop_front") {
			if (D.empty())
				cout << "error\n";
			else
				cout << "ok" << endl;
		}
		if (comand == "pop_back") {
			if (D.empty())
				cout << "error\n";
			else
				cout << "Ok\n";
		}
		if (comand == "size") {
			cout << D.size() << "\n";
		}
		if (comand == "clear") {
			D.clear();
			cout << "ok\n";
		}
		if (comand == "exit") {
			cout << "bye\n";
			return 0;
		}
		if (comand == "print") {
			D.print();
		}
	}
	return 0;
}


