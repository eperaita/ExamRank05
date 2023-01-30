#include "ATarget.hpp"


ATarget::ATarget(const ATarget &orig){ *this=orig;};		
		
ATarget &ATarget::operator=(const ATarget &orig){ this->type = orig.getType(); return(*this);};		

ATarget::ATarget(){};		
		
ATarget::ATarget(std::string t): type(t){};		
		
ATarget::~ATarget(){};	
		
const std::string &ATarget::getType() const{ return(this->type);};		

void ATarget::setType(const std::string &t){ this->type = t;};

void ATarget::getHitBySpell(const ASpell &spell)const {

	std::cout << this->getType() << " has been " << spell.getEffects() << std::endl;

};
