#include<iostream>
using namespace std;

void increment(int money){
	money = money + 10;
}




int main(){
	int money;
	cin>>money; //10
	increment(money);
	cout <<money <<endl;  //10, 20

	return 0;
}