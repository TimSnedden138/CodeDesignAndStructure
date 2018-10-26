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
	T& back();
	const T& front() const;// returns the back-most element
	const T& back() const;
	bool empty() const;
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
	for (size_t i = 0; i < vec.size() - 1 ++i) {
		vec[i] = vec[i + 1];
	}
	vec.push_back();
}

template<typename T>
void tQueue<T>::pop()
{
	for (size_t t = 0; t < vec.size() - 1 ++t) {
		vec[t] = vec[t + 1];
	}
	vec.pop_back();
}

template<typename T>
T & tQueue<T>::front()
{
	return vec[0];
}

template<typename T>
T & tQueue<T>::back()
{
	return vec[vec.size - 1];
}

template<typename T>
inline const T& tQueue<T>::front() const
{
	return vec[0];
}

template<typename T>
inline const T & tQueue<T>::back() const
{
	return vec[vec.size - 1];
}

template<typename T>
size_t tQueue<T>::size() const
{
	return vec.size();
}
template<typename T>
bool tQueue<T>::empty() const
{
	return vec.empty;
}