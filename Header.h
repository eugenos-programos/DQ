#pragma once
#define Max 100

struct node {
	node* prev;
	node* next;
	int* dequeue;

	node(node* Pr, node* Ne);

	void print();
};
struct Dequeue {
	node* first;
	node* last;
	int f,l,Size;	
	Dequeue();
	void add_first();

	void add_last();

	void delete_first();

	void delete_last();

	void push_front(int n);

	void push_back(int n);

    void pop_front();

	void pop_back();

	int size();

	bool empty();

	void clear();

	void print();
};