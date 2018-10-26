#pragma once
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
	const T& front();               // returns the element at the head (const)

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
}

template<typename T>
void tForwardList<T>::pop_front()
{
}

template<typename T>
T & tForwardList<T>::front()
{
	// TODO: insert return statement here
}

template<typename T>
void tForwardList<T>::remove(const T & val)
{
}
