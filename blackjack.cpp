//game of 21
#include <iostream>
#include "Twenty1.h"
using namespace std;

int main()
{
  //create Twenty1 object
  Twenty1 game;

  //variables
  char again;
  char play;

  //intro
  cout << "\nWelcome to Blackjack!" << endl;
  cout << "Ready to play? (y/n) ";
  cin >> play;
  if (play != 'y' && play != 'Y')
    exit(0);

  //main loop
  do
  {
    cout << "\nRound " << game.getRound() << endl;
    game.play();
    cout << "Your score: " << game.getPlayerTotal() << endl;

    if (game.gameover())
      break;

    cout << "\nKeep rolling the dice? (y/n) ";
    cin >> again;
  } while (again == 'y' || again == 'Y');

  cout << "\nGameover!" << endl;
  if (game.isPlayerBust() && game.isComputerBust())
    cout << "You both lose!" << endl;
  else if (game.isComputerBust() || game.getPlayerTotal() > game.getComputerTotal())
    cout << "You win!" << endl;
  else if (game.isPlayerBust() || game.getPlayerTotal() < game.getComputerTotal())
    cout << "You lose!" << endl;
  else if (game.getPlayerTotal() == game.getComputerTotal())
    cout << "You tied with computer!" << endl;

  cout << "\nFinal scores:" << endl;
  cout << "Computer: " << game.getComputerTotal() << endl;
  cout << "You: " << game.getPlayerTotal() << endl;

  return 0;
}
