
#include <print>
#include <string>
#include <ncurses.h>

#include "dice.h"
#include "enums.h"
#include "entity.h"
#include "skill.h"

int main(){

	std::println("\t\t--- WELCOME TO PROJECT DICER ---");



	RegularDice d(6);

	if(test2){
		std::println("enum = {}", (int)test2);
	}

	std::println("d = {}", d.roll());

	return 0;

}