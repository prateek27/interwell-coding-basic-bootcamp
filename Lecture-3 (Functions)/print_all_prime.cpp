#include<iostream>
using namespace std;

bool isPrime(int number){

	for(int i=2;i<=number-1;i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

void printAllPrime(int N){

	for(int no=2;no<=N;no++){
		if(isPrime(no)){
			cout<<no <<" ";
		}
	}

}


int main(){
	int N;
	cin>>N;
	printAllPrime(N);

	return 5;
}