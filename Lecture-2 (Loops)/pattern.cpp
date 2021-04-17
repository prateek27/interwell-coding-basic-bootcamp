#include<iostream>
using namespace std;



int main(){

	int n;
	cin>>n;

	int value = 1;

	for(int row=1;row<=n;row=row+1){
		for(int cnt=1;cnt<=row;cnt=cnt+1){
			cout<<value<<" ";
			value = value + 1; //value = value + 1;
		}
		cout<<endl;

	}


	return 0;
}