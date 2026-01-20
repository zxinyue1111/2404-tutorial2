#include <string>

class Character {
	public:
		//constructor
		Character(const std::string&, int maxHealth, int damage);

		//member functions
		void takeDamage(int damage);
		int strike() const;
		void print();

		//getter
		const std::string& getName() const;
	private:
		std::string name;
		int maxHealth, currentHealth, damage;
};
