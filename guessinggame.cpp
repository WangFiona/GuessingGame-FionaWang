#include <iostream>

using namespace std;

/*Author: Fiona Wang
  Date: Sept. 15, 2021
  This program runs a guessing game that allows the player to guess a number
  between 0 and 100 (inclusive)
 */
int main()
{
  //Initializing variables
  int guess = 0;
  int number = 1;
  bool playing = true;
  char yn;

  //While loop runs until player no longer wants to play
  while (playing == true) {
    //Choosing a random number
    srand(time(NULL));
    int random = rand() % 101;
    
    cout << "Guess the number between 0 and 100 (inclusive)" << endl;

    //do while loop runs until player guesses correctly
    do {
      cout << "Enter your guess:" << endl;
      cin >> guess;
      if (guess > random) { //When the guess is too high
	cout << "Your guess is too high" << endl;
	number++;
      } else if (guess < random) { //When the guess is to low
	cout << "Your guess is too low" << endl;
	number++;
      } else { //When the guess is correct
	cout << "Congratulations you are correct!" << endl;
	cout << "Number of guesses: " << number << endl;
      }
    } while (guess != random);

    //Ask player if they would like to play again
    cout << "Would you like to play again (y/n)?" << endl;
    cin >> yn;

    //End the loop if no
    if (yn == 'n') {
      playing = false;
    }
  }
  
  return 0;
}
