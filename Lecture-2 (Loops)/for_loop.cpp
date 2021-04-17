#include<iostream>
using namespace std;



int main(){

	int n;
	cin>>n;

	int ans =1;

	for(int x=1; x<=n; x = x+1){
		//Repeat
		ans = ans*x;
	}

	cout << "Product is "<<ans <<endl;


	return 0;
}