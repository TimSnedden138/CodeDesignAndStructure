#pragma once

#include "tVector.h"

template <typename T>
class tQueue
{
	tVector<T> vec;                       // contains the data for a queue

public:
	tQueue();                             // default initializes the queue
	tQueue(size_t count, const T& value); // constructs a queue with the given number of elements 
										  // each element is initialized by copying the given value

	void push(const T& value);            // adds an element to the top of the Queue
	void pop();                           // drops the top-most element of the Queue

	T& front();                           // returns the front-most element
	T& back();                            // returns the back-most element

	size_t size() const;
};

template<typename T>
tQueue<T>::tQueue()
{
}

template<typename T>
tQueue<T>::tQueue(size_t count, const T & value)
{
}

template<typename T>
void tQueue<T>::push(const T & value)
{
}

template<typename T>
void tQueue<T>::pop()
{
}

template<typename T>
T & tQueue<T>::front()
{
	// TODO: insert return statement here
}

template<typename T>
T & tQueue<T>::back()
{
	// TODO: insert return statement here
}

template<typename T>
size_t tQueue<T>::size() const
{
	return size_t();
}
