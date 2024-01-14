#pragma once

#include <iostream>

template <typename T>
void miter(T *tab, int size, void (*f)(T &)) {
	for (int i = 0; i < size; i++) {
		f(tab[i]);
	}
}

template <typename T>
void print(T i) {
	std::cout << i << std::endl;
}