#include<iostream>
using namespace std;

int increment(int money){
	money = money + 10;
	return money;
}




int main(){
	int money;
	cin>>money; //10
	money = increment(money);
	cout <<money <<endl;  //20

	return 0;
}