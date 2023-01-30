#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook{

	private:
		SpellBook(const SpellBook &orig);
		SpellBook &operator=(const SpellBook &orig);
		std::vector<ASpell *> book;
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(const ASpell *s);
		void forgetSpell(std::string s);
		ASpell* createSpell(std::string s);

};


#endif
