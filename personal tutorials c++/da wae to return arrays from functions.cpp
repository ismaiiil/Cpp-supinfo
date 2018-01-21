#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
//test
int *retarray() {
	int arr1[3] = { 1,2,3 };
	return arr1;
}

int main() {
	int *arr2 = retarray();
	cout << *arr2;

	return 0;
}
