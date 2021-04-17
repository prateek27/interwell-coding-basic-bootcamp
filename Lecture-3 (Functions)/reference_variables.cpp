#include<iostream>
using namespace std;


int main(){
	//Reference Variables

	int x = 10;
	int &y = x;

	y = y*10;

	x += 10;

	cout<< x <<endl;

	cout<< y <<endl;

	return 0;
}