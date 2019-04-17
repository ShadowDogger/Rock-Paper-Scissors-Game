#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
	cout << "This program was designed by Shadow Dogger#2882\n";
	srand(time(NULL));
	const int Trial = 5;
      int user;
      int computer;
      cout << "Time to play Rock Paper Scissors!\n";
      cout << "Choose which item you'll play!\n";
      cout << "1) Rock\n";
      cout << "2) Paper\n";
      cout << "3) Scissors\n";
      cin >> user;
      if (not user || user < 1 || user > 3) {
      cout << "Please give one of the given choices next time.";
      return 0;
      }
      computer = rand() % 3;
      if (computer == user) {
        cout << "It's a tie!";;
      }
      else {
      if (computer == 3) {
      	cout << "Computer chose scissors\n";
      if (user == 1) {
      cout << "You win!\n";}
      else {
      "You lost, ahhhh.\n";}
      }
      if (computer == 2) {
      	cout << "Computer chose paper\n";
      if (user == 1) {
      cout << "You lost, ahhhh.\n";}
      else {
      cout << "You win!\n";}}
      if (computer == 1) {
      	cout << "Computer chose Rock\n";
      if (user == 2) {
      cout << "You win!\n";}
      else {cout << "You lost, ahhhh.\n";}
    }}
    system("pause");
    return 0;



}
