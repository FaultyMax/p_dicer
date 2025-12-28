
#include <print>

#include "dice.h"

int main(){

	std::println("Hello World!");

	RegularDice d(6);

	std::println("d = {}", d.roll());

	return 0;

}