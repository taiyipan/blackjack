//implementation file for the Die class
#include <cstdlib>  //rand and srand
#include <ctime>  //time function
#include <iostream>
#include "Die.h"
using namespace std;

//the constructor accepts an argument for number of sides and performs a roll
Die::Die(int numSides)
{
  //get system time
  unsigned seed = time(0);
  //seed random number generator
  srand(seed);
  //set number of sides
  if (numSides < 1)
  {
    cout << numSides << "-sided die is impossible." << endl;
    exit(EXIT_FAILURE);
  }
  else
    sides = numSides;
  //roll
  roll();
}
//simulate rolling of die
void Die::roll()
{
  //constant for min value
  const int MIN_VALUE = 1;
  //get random value
  value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}
//return number of sides
int Die::getSides()
{
  return sides;
}
//return die's value
int Die::getValue()
{
  return value;
}
