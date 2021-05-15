#include<iostream>
using namespace std;


int power(int a,int b){
	if(b==0){
		return 1;
	}
	//rec case
	return a*power(a,b-1);
}


int fastpower(int a,int n){
	if(n==0){
		return 1;
	}

	int smallAns = power(a,n/2);
	smallAns = smallAns*smallAns;

	if(n%2==0){
		//n is even
		return smallAns;
	}

	return a * smallAns;

}



int main(){

	int a,b;
	cin>> a >>b;

	cout << fastpower(a,b) <<endl;



	return 0;
}