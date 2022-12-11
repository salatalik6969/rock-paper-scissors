#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;

int main(){
	cout << "Welcome to Rock, Paper, Scissors\n==============================================================\nType x to close the application\nType 'rock' 'scissors' or 'paper' to play\n";
		srand(time(0));
		bool cond = false;
		int unsigned count[2]{0, 0};
		string const tkm[9]{"rock", "scissors", "paper", "Rock", "Scissors", "Paper", "ROCK", "SCISSORS", "PAPER"};
		while (!cond){
			string pp; 
			cin >> pp;
			if (pp == "x") cond = true;
			else{auto result = find(begin(tkm), end(tkm), pp);
				auto dd = distance(tkm, result);
				if (dd > 8)
					cout << "Error, invalid selection\n";
					else{
						dd = (dd % 3) + 1;
						int cp = rand() % 3;
						cout << tkm[cp] << "\n";
						cp += 1;
							if (dd == cp){
							cout << "Tie\n\nPlayer: " << count[0] << "\nComputer :" << count[1] << "\n================\n";}
							else{
							if (dd - cp  == -1) {
								cout << "You Win!\n";
								count[0] = count[0] + 1;
								cout << "\nPlayer: " << count[0] << "\nComputer :" << count[1] << "\n================\n";}
							else{
								cout << "Computer Wins!\n";
								count[1] = count[1] + 1;
								cout << "\nPlayer: " << count[0] << "\nComputer :" << count[1] << "\n================\n";}
					}
			}
		}
		}
return 0;
}