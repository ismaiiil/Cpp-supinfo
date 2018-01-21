#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

//int func(int arr1[], int a) {// by default array is referenced by pointer in C++, however values are reference by value
//	cout << *arr1 << endl;   // ie by default a copy of the value is called INSIDE the function
//	cout << arr1[0] << endl; // however for arrays, the array itself is called, therefore modifying the array will cause
//	arr1[0] = 1;             // changes in the main
//	a = 9;					 // whereas modifying the int wont work
//	return 0;				 // to modify the values an "&" needs to be used, as such: int func(int arr1[], int &a)
//
//}
//
//int main() {
//	int balance[5] = { 7,5,9,8,4 };
//	int testint = 1;
//	int *p = balance; //same as *balance refers to the first value in the array
//	cout << *(balance+1) << endl; //accessing 2nd walue of balance using the "pointer way"
//	cout << *(p+1) <<endl; //this is also a valid syntax
//
//	cout << testint << endl;
//	func(balance,testint);
//	cout << balance[0] << endl;
//	cout << *balance << "\n\n\n";
//
//	cout << testint << endl;
//
//	return 0;
//}