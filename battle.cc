#include "battle.h"
#include "Character.h"
#include <iostream>

namespace Gondor {
	void fight(Character& fighter, Character& orc) {
		int fighterDamage = fighter.strike() + 1;
		int orcDamage = orc.strike() - 1;

		if (fighterDamage < 0) fighterDamage = 0;
		if (orcDamage < 0) orcDamage = 0;

		fighter.takeDamage(orcDamage);
		orc.takeDamage(fighterDamage);

		std::cout<<fighter.getName()<<" hits "<<orc.getName()<<" for "<<fighterDamage<<" damage!"<<std::endl;
		std::cout<<orc.getName()<<" hits "<<fighter.getName()<<" for "<<orcDamage<<" damage!"<<std::endl;
	}
}

namespace Mordor {
	void fight(Character& fighter, Character& orc) {
		int fighterDamage = fighter.strike() - 1;
		int orcDamage = orc.strike() + 1;

		if (fighterDamage < 0) fighterDamage = 0;
		if (orcDamage < 0) orcDamage = 0;

		fighter.takeDamage(orcDamage);
		orc.takeDamage(fighterDamage);

		std::cout<<fighter.getName()<<" hits "<<orc.getName()<<" for "<<fighterDamage<<" damage!"<<std::endl;
		std::cout<<orc.getName()<<" hits "<<fighter.getName()<<" for "<<orcDamage<<" damage!"<<std::endl;
	}
}
	
