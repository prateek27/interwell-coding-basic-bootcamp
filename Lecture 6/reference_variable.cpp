#include<iostream>
using namespace std;


int main(){

	//Reference Variable
	int x = 10;
	int &y = x;

	x++;

	cout<< x <<endl;
	cout << y <<endl;

	y++;

	cout << x <<endl;
	cout << y <<endl;



	return 0;
}