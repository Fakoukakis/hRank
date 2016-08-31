//============================================================================
// Name        : hackerRank.cpp
// Author      : Mike Fakoukakis
// Version     :
// Copyright   : free
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void printArray(int size, int* ar){
	for (int i =0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;
}

void insertionSort(int ar_size, int *  ar) {
	for(int i = 0; i< ar_size - 1; i++){
		if (ar[i] > ar[i+1]) {
			for (int j=i + 1; j>0; j--){
				if(ar[j] < ar[j-1]){
					swap(ar[j],ar[j-1]);
				}
			}
		}
		printArray(ar_size, ar);
	}
}
int main(void) {

    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]);
    }

   insertionSort(_ar_size, _ar);

   return 0;
}
