#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell{

	protected:
		std::string name;
		std::string effects;

		ASpell(const ASpell &orig);		
		ASpell &operator=(const ASpell &orig);		

	public:
		ASpell();		
		ASpell(std::string n, std::string e);		
		virtual ~ASpell();	
		
		const std::string &getName() const;		
		const std::string &getEffects() const;		
		void setEffects(const std::string &e);

		virtual ASpell *clone() const = 0;

		void launch(const ATarget &target) const;

				
			


};



#endif
