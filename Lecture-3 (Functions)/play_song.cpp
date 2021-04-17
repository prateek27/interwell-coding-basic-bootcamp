#include<iostream>
#include<string>
using namespace std;

void play_song(string type,int duration=5){
	cout<<"Playing a "<<type<<" song for next "<<duration <<" minutes";
}

int main(){
	string song_type;
	cin>>song_type;

	int time;
	cin>>time;

	play_song(song_type,time);

	return 0;
}

