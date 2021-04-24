#include<iostream>
using namespace std;

//Binary Search
int binary_search(int a[],int n,int X){
	int s = 0;
	int e = n -1;

	while(s<=e){
		int mid = (s+e)/2;

		if(a[mid]==X){
			return mid;
		}
		else if(a[mid]>X){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}


int main(){
	//Sorted Array
	int arr[] = {1,2,10,11,19,29,38};
	int n = sizeof(arr)/sizeof(int);

	int X;
	cin>>X;

	cout<<"Binary Searching ..."<<binary_search(arr,n,X)<<endl;

	return 0;

}	