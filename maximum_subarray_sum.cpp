#include<iostream>
using namespace std;



int main(){
	

	//Kadane's Algorithm (Intutive)
	int arr[] = {-1,2,3,-5,6,-1,10,12,-4,-3};
	int n = sizeof(arr)/sizeof(int);


	int cs = 0;
	int ms = 0;

	for(int i=0;i<n;i++){
		cs += arr[i];
		
		if(cs < 0){
			cs = 0;
		}
		ms = max(ms,cs);
	}

	cout<< ms <<endl;

	return 0;
}