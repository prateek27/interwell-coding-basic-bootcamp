#include<iostream>
using namespace std;

//passing views by reference
void incrementViewCnt(int &views){
	views++;
}

int main(){

	int videoViews = 1001;
	incrementViewCnt(videoViews);

	cout << videoViews <<endl;

	return 0;
}