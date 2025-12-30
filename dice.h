// DICE HEADER FILE

#ifndef DICE_H
#define DICE_H

class Dice {
public:

	int walls;

	virtual int roll() = 0;

	Dice(int w);

};


class RegularDice : public Dice {
public:

	virtual int roll();

	RegularDice(int w);

};

#endif