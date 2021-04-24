#include<iostream>
using namespace std;


void twoSum(int arr[],int n,int X){
	for(int i=0;i<n-1;i++){
		int first = arr[i];
		for(int j=i+1;j<n;j++){
			int second = arr[j];
			if(first + second == X){
				cout << first<<"," <<second <<endl;
			}
		}
	}
}



int main(){

	int arr[] = {1,-2,5,8,-3,7,10,0,3,4};
	int n = sizeof(arr)/sizeof(int);
	twoSum(arr,n,8);
	// (1 + 7), (-2,10), .......



	return 0;

}