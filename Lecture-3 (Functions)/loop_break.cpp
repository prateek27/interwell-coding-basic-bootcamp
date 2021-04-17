#include<iostream>
using namespace std;



int main(){

	int n;
	cin>>n;

	int i;
	for(i=1; i<=n ; i++){

		if(i%7==0){
			continue;
		}
		cout<<i <<endl;

	}
	//after the loop
	cout <<"After Loop is over "<< i <<endl;

	return 0;
}