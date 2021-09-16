#include <iostream>

using namespace std;

/*Author: Fiona Wang
  Date: Sept. 15, 2021
  This program runs a guessing game that allows the player to guess a number
  between 0 and 100 (inclusive)
 */
int main()
{
  int guess = 0;
  int number = 1;
  bool playing = true;
  char yn;

  while (playing == true) {
    srand(time(NULL));
    int random = rand() % 101;
    cout << "Guess the number between 0 and 100 (inclusive)" << endl;
    do {
      cout << "Enter your guess:" << endl;
      cin >> guess;
      if (guess > random) {
	cout << "Your guess is too high" << endl;
	number++;
      } else if (guess < random) {
	cout << "Your guess is too low" << endl;
	number++;
      } else {
	cout << "Congratulations you are correct!" << endl;
	cout << "Number of guesses: " << number << endl;
      }
    } while (guess != random);

    cout << "Would you like to play again (y/n)?" << endl;
    cin >> yn;
    if (yn == 'n') {
      playing = false;
    }
  }
  
  return 0;
}
