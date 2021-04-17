#include<iostream>
using namespace std;

/* This is 
a 
multiple line 
comment
*/

void sayHello(); //Declaration


void sayHello(){ //Declaration + Definition
	cout<<"Hello Everyone!";
}

int main(){
	
	sayHello(); //Function Call;

	return 0;
}