
#include <random>
#include <iostream>

#include "dice.h"

int randomize(int start, int end){

	// apparently this is a better way than rand()
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(start, end);

    return dis(gen);

}

Dice::Dice(int w)
	: walls(w)
{}

RegularDice::RegularDice(int w)
	: Dice(w)
{}

int RegularDice::roll(){

	return randomize(1,Dice::walls);

}