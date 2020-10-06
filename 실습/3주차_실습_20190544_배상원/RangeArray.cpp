#include "RangeArray.h"
#include <iostream>

using namespace std;

RangeArray::RangeArray(int a, int b) : Array(b - a + 1) {
	low = a;
	high = b;
}

RangeArray::~RangeArray() {
}

int RangeArray::baseValue() {
	return low;
}

int RangeArray::endValue() {
	return high;
}

int RangeArray::operator[] (int i) const{
	if ( low <= i && i <= high)
		return data[i-low];
	else
		cout<<"Array index Error"<<endl;
		return 0;
}

int& RangeArray::operator[] (int i) {
	static int k;
	if ( low <= i && i <= high)
		return data[i-low];
	else 
		cout<<"Array index Error"<<endl;
		return k;
}

