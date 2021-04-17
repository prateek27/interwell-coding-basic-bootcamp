#include<iostream>
using namespace std;

/*
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/


int main(){
	
	int n;
	cin>>n;
	//rows 
	for(int row=1;row<=n;row++){

		int cnt = n - row + 1;
		char value = 'A'; 
		//inc 
		for(int c=1;c<=cnt;c++){
			cout <<value;
			value = value + 1;
		}
		//Dec 
		//reset value to correct value
		value = value - 1;
		for(int c=1;c<=cnt;c++){
			cout <<value;
			value = value - 1;
		}
		cout << endl;
	}


	return 0;
}
