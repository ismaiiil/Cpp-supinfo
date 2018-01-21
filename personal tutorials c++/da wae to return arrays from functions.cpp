#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;


int main() {
	srand(time(NULL));
	for (; ;) {
		cout << rand() % 100 << endl;
	}
	return 0;
}
