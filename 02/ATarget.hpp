#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>

class ASpell;


class ATarget{
	protected:
		std::string type;

		ATarget(const ATarget &orig);		
		ATarget &operator=(const ATarget &orig);		

	public:
		ATarget();		
		ATarget(std::string t);		
		virtual ~ATarget();	
		
		const std::string &getType() const;		
		void setType(const std::string &e);

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &spell) const;

				
			


};



#endif
