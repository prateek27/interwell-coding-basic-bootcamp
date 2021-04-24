#include<iostream>
using namespace std;

// 1. Arrays are passed by reference
// 2. You should pass N 

void print(int arr[],int n){

	arr[2] = 20;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl;
	}

}

// Largest Element in the array
int findLargest(int arr[],int n){
	
	if(n==0){
		cout<<"Array doesn't exist"; 
		return -1;
	}

	int largest = arr[0];

	for(int i=1;i<n;i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	return largest;
}



int main(){

	int arr[] = {10,15,12,13,26,8};
	int n = sizeof(arr)/sizeof(int); //6
		
	cout<< findLargest(arr,n) <<endl;
	//print(arr,n);

	//cout<<"Updated value 2nd index "<<arr[2] <<endl;
	//cout<<"In Main";
	//cout << sizeof(arr) <<endl;
	
	/*
	for(int i=0;i<n;i++){
		cout << arr[i] <<" ";
	}*/


	return 0;

}