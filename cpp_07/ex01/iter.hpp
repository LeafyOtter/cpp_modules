#pragma once
#ifndef __ITER_H__

#include <iostream>

template <typename T> void iter(T *array, int length, void (*f)(const T&)) {
	for (int i = 0; i < length; i++) {
		f(array[i]);
	}
}

template <typename T> void print(T &elem) {
	std::cout << elem << " ";
}

#endif