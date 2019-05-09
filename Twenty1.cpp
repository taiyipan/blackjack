//implementation file for TwentyOne class
#include "Twenty1.h"
#include "Die.h"
using namespace std;

Twenty1::Twenty1()
{
  playerTotal = 0;
  computerTotal = 0;
  round = 1;
  playerBust = false;
  computerBust = false;
}
void Twenty1::play()
{
  //computer rolls 2 dice
  die1.roll();
  die2.roll();
  //computer gets points
  computerTotal += die1.getValue() + die2.getValue();
  //player rolls 2 dice
  die1.roll();
  die2.roll();
  //player gets points
  playerTotal += die1.getValue() + die2.getValue();
  //test if either player or computer goes bust
  bustTest();
  //update round
  round++;
}
void Twenty1::bustTest()
{
  if (playerTotal > 21)
    playerBust = true;
  if (computerTotal > 21)
    computerBust = true;
}
int Twenty1::getPlayerTotal()
{
  return playerTotal;
}
bool Twenty1::isPlayerBust()
{
  return playerBust;
}
int Twenty1::getComputerTotal()
{
  return computerTotal;
}
bool Twenty1::isComputerBust()
{
  return computerBust;
}
int Twenty1::getRound()
{
  return round;
}
bool Twenty1::gameover()
{
  if (playerBust || computerBust)
    return true;
  else
    return false;
}
