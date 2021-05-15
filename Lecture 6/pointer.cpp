#include<iostream>
using namespace std;


int main(){


	int x = 10;
	//Address of operator
	cout << &x <<endl;

	int *y = &x;
	int *z = y;

	cout << *(&x) <<endl;
	cout << &(*x) <<endl;
	cout << y <<endl;
	cout << z <<endl;
	cout << *z <<endl;
	cout << &z <<endl;


}