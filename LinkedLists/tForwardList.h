#pragma once
#include <iostream>
template<typename T>
class tForwardList
{
	struct Node
	{
		T data;                     // data for the element stored
		Node * next;                // pointer to node following this node
	};

	Node * head;                    // pointer to head of linked list

public:
	tForwardList();                 // default constructor
	~tForwardList();                // destructor

	void push_front(const T& val);  // adds element to front (i.e. head)
	void pop_front();               // removes element from front

	T& front();                     // returns the element at the head
	void remove(const T& val);      // removes all elements equal to the given value
};

template<typename T>
tForwardList<T>::tForwardList()
{
}

template<typename T>
tForwardList<T>::~tForwardList()
{
}

template<typename T>
void tForwardList<T>::push_front(const T & val)
{
	Node *temp = new Node;
	temp->next = head;
	temp->data = val;
	head = temp;

}

template<typename T>
void tForwardList<T>::pop_front()
{
	Node *temp = new Node;
	if (head == NULL) {
		return;
	}
	temp = head->next;
	delete head;
	head = temp;
}

template<typename T>
T & tForwardList<T>::front()
{
	return head->data;
}

template<typename T>
void tForwardList<T>::remove(const T & val)
{
	Node *temp = new Node;
	if (head == NULL) {
		return;
	}
	else if (head->data == val) {
		temp = head->next;
		delete head;
		head = temp;
	}
	else {
		head = head->next;
	}
}
