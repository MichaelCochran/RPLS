//
//  main.cpp
//  rpls
//
//  Created by Michael Cochran on 3/21/23.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL)); // Seed the random number generator with the current time

  // Define the moves
  const int rock = 0;
  const int paper = 1;
  const int scissors = 2;
  const int lizard = 3;
  const int spock = 4;

  // Define the result matrix, where result[i][j] is the result of player 1 playing move i against player 2 playing move j
  const int result[5][5] = {
    {0, -1, 1, 1, -1}, // rock vs. paper/scissors/lizard/spock
    {1, 0, -1, -1, 1}, // paper vs. rock/scissors/lizard/spock
    {-1, 1, 0, 1, -1}, // scissors vs. rock/paper/lizard/spock
    {-1, 1, -1, 0, 1}, // lizard vs. rock/paper/scissors/spock
    {1, -1, 1, -1, 0}  // spock vs. rock/paper/scissors/lizard
  };

  // Get player 1's move
  cout << "\n";
  int p1_move;
  cout << "Enter your move (0 = rock, 1 = paper, 2 = scissors, 3 = lizard, 4 = spock): ";
  cin >> p1_move;
  while (p1_move < 0 || p1_move > 4) {
    cout << "Invalid move. Enter your move (0 = rock, 1 = paper, 2 = scissors, 3 = lizard, 4 = spock): ";
    cin >> p1_move;
  }

  // Get computer's move
  int p2_move = rand() % 5;
  cout << "\n";

  // Print the moves
  cout << "You played ";
  switch (p1_move) {
    case rock:
      cout << "rock";
      break;
    case paper:
      cout << "paper";
      break;
    case scissors:
      cout << "scissors";
      break;
    case lizard:
      cout << "lizard";
      break;
    case spock:
      cout << "spock";
      break;
  }
  cout << "." << endl;
  cout << "Computer played ";
  switch (p2_move) {
    case rock:
      cout << "rock";
      break;
    case paper:
      cout << "paper";
      break;
    case scissors:
      cout << "scissors";
      break;
    case lizard:
      cout << "lizard";
      break;
    case spock:
      cout << "spock";
      break;
  }
  cout << "." << endl;

  // Determine the result
  int result_code = result[p1_move][p2_move];
  if (result_code == 0) {
    cout << "Tie!" << endl;
  } else if (result_code == 1) {
    cout << "You win!" << endl;
  } else {
    cout << "You lose!" << endl;
  }

    main();
}
