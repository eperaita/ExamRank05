#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include  <iostream>

class ASpell;

class ATarget{

	protected:
		std::string type;

	public:
		ATarget();
		virtual ~ATarget();
		ATarget(std::string t);
		ATarget(const ATarget &orig);
		ATarget &operator=(const ATarget &orig);

		const std::string getType() const ;

		virtual ATarget *clone() = 0;

		void getHitBySpell(const ASpell &spell) const;

};


#endif
