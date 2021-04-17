#include<iostream>
using namespace std;



int main(){

	int n;
	cin>>n;

	int x = 1;
	int ans = 1; //an array to store
	
	while(x<=n){

		ans = ans*x;

		x++;
	}

	cout << "Product is "<<ans <<endl;


	return 0;
}