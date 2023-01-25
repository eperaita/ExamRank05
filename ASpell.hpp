#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "ATarget.hpp"
#include  <iostream>

class ATarget;

class ASpell{

	protected:
		std::string name;
		std::string effects;

	public:
		ASpell();
		virtual ~ASpell();
		ASpell(std::string n, std::string e);
		ASpell(const ASpell &orig);
		ASpell &operator=(const ASpell &orig);

		const std::string getName() const ;
		const std::string getEffects() const ;

		virtual ASpell *clone() = 0; //no const?????

		void launch(const ATarget &target) const;

};


#endif
