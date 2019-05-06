#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

void sleep(double delayDuration);
void clear();

int main () {
  // Where the keys are called.
  string randomInput = "";
  string userInput = "";
  int roundsWon = 0;
  char key[4] = {'W', 'A', 'S', 'D'};
  int round = 1;

  // Seeding Random Generator
  srand(time(NULL));

  // Loop of 15 rounds
  while(round < 16) {
    // Displays the key and deletes after 5 seconds
    randomInput += key[rand() % 4];
    cout << randomInput << endl;

    sleep(2);
    clear();

    // User input of sequence
    cout << "Please enter " << round << " characters to match:";
    cin >> userInput;

    if(userInput == randomInput) {
      cout << "You win round " << round << "!" << endl;
      roundsWon++;
    } else {
      cout << "You lose round " << round << "!" << endl;

     return 0;
    }

    round++;
  }

  sleep(2);
  cin.get();
  clear();

  cout << "YOU WIN!!!!";

}

// A simple timer using ctime and cstdio.
void sleep(double delayDuration) {
  clock_t startTime = clock();
  double currentDuration = (clock() - startTime) / (double)CLOCKS_PER_SEC;

  while(currentDuration <= delayDuration) {
    currentDuration = (clock() - startTime) / (double)CLOCKS_PER_SEC;
  }
}

void clear() {
  for(int i = 0; i < 100; i++) {
    cout << endl;
  }
}
