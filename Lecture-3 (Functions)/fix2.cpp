#include<iostream>
using namespace std;

//pass by reference using reference variable
void increment(int &pese){
	pese = pese + 10;
}


int main(){
	int money;
	cin>>money; //10
	increment(money);
	cout<< money;  //20

	return 0;
}