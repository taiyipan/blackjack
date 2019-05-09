//specification file for the Die class
#ifndef DIE_H
#define DIE_H

class Die
{
  private:
    int sides;  //number of sides
    int value;  //die's value
  public:
    Die(int = 6);  //constructor
    void roll();  //roll the die
    int getSides();  //return number of sides
    int getValue();  //return die's value
};

#endif
