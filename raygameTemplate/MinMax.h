#pragma once
#include"raylib.h"
#include<iostream>
template<typename T>
T min(T a, T b){
	if (a <= b)
	{
	return a;
	}
	return b;
}
template<typename t>
t max(t a, t b)
{
	if (b >= a){
	return b;
	}
return a;}
template<typename T>
T add(T a, T b){
	c = a + b;
	return c;
}
template<typename t>
t sub(t a, t b)
{
	c = a - b;
	return c;
}
template<typename t>
t multiply(t a, t b)
{
	c = a * b;
	return c;
}
template<typename T>
T divide(T a, T b)
{
	c = a / b;
	return c;
}