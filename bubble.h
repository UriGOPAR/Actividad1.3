// =================================================================
//
// File: bubble.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				bubble sort.
// =================================================================
#ifndef BUBBLE_H
#define BUBBLE_H

#include "header.h"
#include <vector>

template <class T>
void bubbledia(std::vector<T> &v) {
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j].d > v[j + 1].d){
				swap(v, j, j + 1);
			}
		}
	}
}

template <class T>
void bubblemes(std::vector<T> &v) {
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j].m > v[j + 1].m){
				swap(v, j, j + 1);
			}
		}
	}
}


#endif /* BUBBLE_H */