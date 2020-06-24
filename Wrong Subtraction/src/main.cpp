/*
 * main.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: mohamed
 */
#include<iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	while (k--) {
		n % 10 != 0 ? n-- : n /= 10;

	}
	cout << n << endl;
	return 0;
}

