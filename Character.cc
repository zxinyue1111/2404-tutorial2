#include "Character.h"
#include <string>
#include <iostream>

using namespace std;

Character::Character(const std::string& name, int maxHealth, int damage) {
	this->name = name;
	this->maxHealth = maxHealth;
	this->currentHealth = maxHealth;
	this->damage = damage;
}

void Character::takeDamage(int damage) {
	currentHealth -= damage;

	if (currentHealth < 0) {
		currentHealth = 0;
	}
}

int Character::strike() const{
	return damage;
}

void Character::print() {
	cout<<"Name: "<<name<<endl;
	cout<<"Current health: "<<currentHealth<<endl;
}

const std::string& Character::getName() const {
	return name;
}
