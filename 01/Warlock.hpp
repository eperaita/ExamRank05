#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include  <iostream>
#include  <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class Warlock{

	private:
		std::string name;
		std::string title;

		std::vector<ASpell *> book;

		Warlock();
		Warlock(const Warlock &orig);
		const Warlock &operator=(const Warlock &orig);

	public:
		Warlock(std::string n, std::string t);
		~Warlock();

		const std::string getName() const ;
		const std::string getTitle() const;
		void setTitle( const std::string t);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string &spell);
		void launchSpell(const std::string &spell, const ATarget &target);


};


#endif
