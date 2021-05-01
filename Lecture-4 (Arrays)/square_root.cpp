#include<iostream>
using namespace std;

int squareRoot(int N){
	//Linear Search
	int i;
	for(i=0; i*i <=N;i++){}

	return i-1;
}

//--------------Binary Search
int sqRootBinSearch(int N){

	int s =0;
	int e = N;

	int ans = 0;

	while(s<=e){
		int mid = (s+e)/2;

		if(mid*mid==N){
			return mid;
		}
		else if(mid*mid < N){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return ans;

}

int main(){

	int N;
	cin>>N;
	cout << squareRoot(N)<<endl;
	cout << sqRootBinSearch(N) <<endl; 
	//100---> 10
	///110-->10
	///121 -->11
	//50 ---?7
	//49---> 7

	return 0;
}