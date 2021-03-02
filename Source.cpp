#include <iostream>
#include "Header.h"
using namespace std;



	node::node(node* Pr, node* Ne) {
		prev = Pr;
		next = Ne;
		dequeue = new int[Max]();
	}

	void node::print() {
		for (int k = 0; k < Max; k++) {
			if(dequeue[k] != 0)cout << dequeue[k] << " ";
		}
		cout << endl;
	}


	Dequeue::Dequeue() {
		node* N = new node(nullptr, nullptr);
		first = N;
		last = N;
		f = Max / 2 - 1;
		l = Max / 2;
		Size = 0;
	}

	// Управление двусвязным списком
	void Dequeue::add_first() {			// добавляет новый узел в начало списка
		node* N = new node(nullptr, first);
		first->prev = N;
		first = N;
		f = Max - 1;
	}

	void Dequeue::add_last() {		// добавляет новый узел в конец списка
		node* N = new node(last, nullptr);
		last->next = N;
		last = N;
		l = 0;
	}

	void Dequeue::delete_first() {		// удаляет первый узел списка
		node* N = first->next;
		delete first;
		first = N;
		first->prev = nullptr;
		f = 0;
	}

	void Dequeue::delete_last() {		// удаляет последний узел списка
		node* N = last->prev;
		delete last;
		last = N;
		last->next = nullptr;
		l = Max - 1;
	}

	// Управление деком
	void Dequeue::push_front(int n) {
		(first->dequeue)[f] = n;
		f--;
		Size++;
		if (f == -1)		// если первый дек переполнен
			add_first();	// добавляем в начало списка новый дек
	}

	void Dequeue::push_back(int n) {
		(last->dequeue)[l] = n;
		l++;
		Size++;
		if (l == Max)		// если последний дек переполнен
			add_last();		// добавляем в конец списка новый дек
	}

	int Dequeue::pop_front() {
		Size--;
		if (f == Max - 1)
			delete_first();
		else
			f++;
		return (first->dequeue)[f];
	}

	int Dequeue::pop_back() {
		Size--;
		if (l == 0)
			delete_last();
		else
			l--;
		return (last->dequeue)[l];
	}

	int Dequeue::size() {
		return Size;
	}

	bool Dequeue::empty() { return (Size == 0); }

	void Dequeue::clear() {
		node* N = first;
		while (N) {
			node* M = N->next;
			delete N->prev;
			delete N;
			N = M;
		}

		N = new node(nullptr, nullptr);

		first = N;
		last = N;
		Size = 0;
		f = Max / 2 - 1;
		l = Max / 2;
	}

	void Dequeue::print() {
		node* N = first;
		while (N) {
			N->print();
			N = N->next;
		}
	}
