
#include <string>

#ifndef SKILL_H
#define SKILL_H

class Skill{
public:

	int dice_requirement;
	int lvl_requirement;
	std::string description;

	virtual void cast(void* target) = 0; // for now it'll be void, however int might be better.

	Skill();
	Skill(int dice, int lvl, std::string desc);

};

class Attack : public Skill{

	Attack();
	Attack(int dice, int lvl, std::string desc);

};

#endif