#include<iostream>
using namespace std;

void incr(int& ref) {
	ref++;
}

int main() {

	int a = 10;

	incr(a); // a is passed by reference

	cout << a << endl; // 11

	return 0;
}
