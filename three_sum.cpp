#include<iostream>
#include<algorithm>
using namespace std; 

	

int main(){


	int arr[] = {10,12,1,5,6,2,3,8,7,5,0};

	int n = sizeof(arr)/sizeof(int);

	int T;
	cin>>T;



	//Sort 
	sort(arr,arr + n);

	int current_sum ;

	for(int i=0;i<=n-3;i++){
		//for every a[i] we need to find a pair such a[i] + P1 + P2 === T 
		int j = i + 1;
		int k = n - 1;

		while(j<k){
			current_sum = (arr[i] + arr[j] + arr[k]);

			if(current_sum==T){
				cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k] <<endl;
				j++; k--;
			}
			else if(current_sum>T){
				k--;
			}
			else{
				j++;
			}

		}
	}




	return 0;
}