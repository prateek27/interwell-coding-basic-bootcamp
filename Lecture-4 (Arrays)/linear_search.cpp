#include<iostream>
using namespace std;


int linearSearch(int arr[],int n,int X){

	for(int i=0;i<n;i++){
		if(arr[i]==X){
			return i;
		}
	}
	cout<<"Not found";
	return -1;
}



int main(){

	int arr[] = {1,-2,5,8,-3,7,10,0,3,4};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "10 is present at index " <<linearSearch(arr,n,10) <<endl;


	return 0;

}