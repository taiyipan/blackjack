//specification file for TwentyOne class
#ifndef TWENTY1_H
#define TWENTY1_H
#include <iostream>
#include "Die.h"

class Twenty1
{
  private:
    int playerTotal, computerTotal;
    int round;
    bool playerBust, computerBust;
    Die die1;
    Die die2;
    void bustTest();
  public:
    Twenty1();
    void play();
    int getPlayerTotal();
    bool isPlayerBust();
    int getComputerTotal();
    bool isComputerBust();
    int getRound();
    bool gameover();
};

#endif
