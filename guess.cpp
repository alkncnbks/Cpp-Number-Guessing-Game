#include <iostream>
using namespace std;

int main() {
	
	int guess;
	int answer = 32;
	
	cout<<"Welcome to our number guessing game"<<endl;
	cout<<"Rules are simple,just guess a number let's say our number is greater or less than that number."<<endl;
	
	do{
		cout<<"Enter your guess"<<endl;
		cin>>guess;
		
		if(guess > answer){
			cout<<"High."<<endl;
		}
		else if(guess < answer){
			cout<<"Low."<<endl;
		}
		else if(guess == answer){
			cout<<"Correct! Thanks for playing."<<endl;
		}
		
	}while(answer != guess);
	
	
	
	
	
	
	return 0;
}
