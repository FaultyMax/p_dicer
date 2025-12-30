// ENTITY + PLAYER HEADER FILE

#include <string>
#include "dice.h"
#include "skill.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity {
public:

	std::string name;
	int lvl;
	int max_hp;
	int hp;
	Dice* dice;
	Skill* skills; 


	Entity(std::string name, int lvl, int hp, void* dice_ptr, void* skills_ptr);

};

class Player : public Entity{

	int current_exp;
	int ducats;
	int reputation;

	Skill* known_skills;
	//Skill[9] equipped;

	Player(std::string name, int hp, void* skills_ptr, void* dice_ptr);

};



#endif