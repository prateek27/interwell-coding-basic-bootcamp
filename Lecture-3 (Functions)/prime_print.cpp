#include<iostream>
using namespace std;

//17

bool isPrime(int number){

	for(int i=2;i<=number-1;i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}


int main(){
		
	int no;
	cin>>no;

	if(isPrime(no)){
		cout<<no<<" is prime";
	}
	else{
		cout<<no <<"NOT PRime";
	}

	return 0;
}