#include <string>

class Character {
	public:
		//constructor
		Character(const std::string&, int maxHealth, int damage);

		//member functions
		void takeDamage(int damage);
		int strike();
		void print();

		//getter
		std::string getName();
	private:
		std::string name;
		int maxHealth, currentHealth, damage;
};
