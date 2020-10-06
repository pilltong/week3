#include <iostream>
#include "Array.h"

using namespace std;

Array::Array(int size) {
	if (size <= 0)
		cout<<"Array size Error"<<endl;
	else
		data = new int[size];
		len = size;
}

Array::~Array() {
	delete [] data;
}

int Array::length() const {
	return len;
} 

int Array::operator[](int i) const{
	if(i >= 0 && i < len)
		return data[i];
	else
		cout<<"Array index error"<<endl;
		return 0;
}

int& Array::operator[](int i) {
	static int tmp;
	if(i >= 0 && i < len)
		return data[i];
	else
		cout<<"Array index error"<<endl;
		return tmp;
}

void Array::print() {
	int i = 0;
	cout<<"[";
	for(i=0; i < len; i++) {
		cout<<" "<<data[i];
	}
	cout<<"]"<<endl;

}

