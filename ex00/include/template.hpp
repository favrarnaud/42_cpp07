#pragma once

#include <iostream>

template <typename T>
void mswap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}
template <typename T>
T mmin(T a, T b){
	if ( a < b)
		return a;
	else
		return b;
}
template <typename T>
T mmax(T a, T b) {
	if ( a > b)
		return a;
	else
		return b;
}