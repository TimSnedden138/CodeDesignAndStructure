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