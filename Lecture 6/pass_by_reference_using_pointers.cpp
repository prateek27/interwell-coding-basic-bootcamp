#include<iostream>
using namespace std;

//pass by reference using pointers
void incrementMoney(int *money){
	*money = *money + 10;
}


int main(){

	int m = 10;
	incrementMoney(&m);
	cout << m <<endl;


	return 0;

}