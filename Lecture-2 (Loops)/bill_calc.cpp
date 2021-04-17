#include<iostream>
using namespace std;

/*
1 to 100 units 	Free
100 to 200 units	Rs. 5/unit
200 to 300 units	Rs.10/unit
300+ units	Rs.12/unit
*/

int main(){
		
	int units;
	cin>>units;

	int bill_amount;

	if(units<=100){
		bill_amount = 0;
	}
	else if(units<=200){
		bill_amount = (units-100)*5;
	}
	else if(units<=300){
		bill_amount = (100*5) + (units-200)*10;
	}
	else{
		bill_amount = (100*5) + (100*10) + (units-300)*12;
	}
	cout << bill_amount <<endl;


	return 0;
}