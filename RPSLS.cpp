/*This game is an extended version of rock, paper & 
scissors to increase the probability of the outcome*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int user = 0;
    // Generating random number 1-5
    srand(time(NULL));
    int computer = rand() % 5 + 1;

    cout << "---------------------------------\n";
    cout << "rock paper scissors lizard spock!\n";
    cout << "---------------------------------\n";

    cout << "1) Rock\n";
    cout << "2) Paper\n";
    cout << "3) Scissors\n";
    cout << "4) lizard\n";
    cout << "5) spock\n\n";

    cout << "shoot!: ";
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int lizard = 4;
    int spock = 5;

    //User Input
    cin >> user;

    /* 
    rock > scissors
    scissors > paper
    paper > rock
    lizard > spock
    spock > scissors
    scissors > lizard
    lizard > paper
    paper > spock
    spock > rock
    rock > lizard
    */

    cout << "computer: " << computer << "\n\n";

    // Conditional statements 
    if (user == rock && computer == scissors) {

        cout << "You Win!\n";
    }
    else if (user == scissors && computer == paper) {

        cout << "You Win!\n";
    }
    else if (user == paper && computer == rock) {

        cout << "You Win!\n";
    }
    else if (user == lizard && computer == spock) {

        cout << "You Win!\n";
    }
    else if (user == spock && computer == scissors) {

        cout << "You Win!\n";
    }
    else if (user == scissors && computer == lizard) {

        cout << "You Win!\n";
    }
    else if (user == lizard && computer == paper) {

        cout << "You Win!\n";
    }
    else if (user == paper && computer == spock) {

        cout << "You Win!\n";
    }
    else if (user == spock && computer == rock) {

        cout << "You Win!\n";
    }
    else if (user == rock && computer == lizard) {

        cout << "You Win!\n";
    }
    else if (user == computer) {

        cout << "Tie!\n";
    }
    else {

        cout << "You Lose!\n";
    }
}