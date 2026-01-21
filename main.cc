#include <iostream>
#include "Character.h"
#include "battle.h"

int main() {
	using namespace std;

	string fighterName;
	int fighterMaxHealth;
	int fighterDamage;

	string orcName;
	int orcMaxHealth;
	int orcDamage;

	cout<<"Please enter your name (fighter): ";
	cin>>fighterName;

	cout<<"Please enter your max health (fighter): ";
	cin>>fighterMaxHealth;

	cout<<"Please enter your damage (fighter): ";
	cin>>fighterDamage;

	Character fighter(fighterName, fighterMaxHealth, fighterDamage);
	
	cout<<"Please enter your name (orc): ";
	cin>>orcName;

	cout<<"Please enter your max health (orc): ";
	cin>>orcMaxHealth;

	cout<<"Please enter your damage (orc): ";
	cin>>orcDamage;

	Character orc(orcName, orcMaxHealth, orcDamage);

	fighter.print();
	orc.print();

	Gondor::fight(fighter, orc);
	fighter.print();
	orc.print();

	Mordor::fight(orc, fighter);
	fighter.print();
	orc.print();

	return 0;
}
