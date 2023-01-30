#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

class Warlock{

	private:
		std::string name;
		std::string title;
		
		SpellBook mybook;
		
		Warlock();
		Warlock(const Warlock &orig);
		Warlock &operator=(const Warlock &orig);

	public:
		~Warlock();
		Warlock(const std::string &n, const std::string &t);
		
		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &t);

		void introduce() const;

		void learnSpell(ASpell *s);
		void forgetSpell(std::string s);
		void launchSpell(std::string s, const ATarget &t);

};




#endif
