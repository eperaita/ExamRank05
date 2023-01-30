#include "ASpell.hpp"


ASpell::ASpell(const ASpell &orig){ *this=orig;};		
		
ASpell &ASpell::operator=(const ASpell &orig){ this->name = orig.getName(); this->effects = orig.getEffects(); return(*this);};		

ASpell::ASpell(){};		
		
ASpell::ASpell(std::string n, std::string e): name(n), effects(e){};		
		
ASpell::~ASpell(){};	
		
const std::string &ASpell::getName() const{ return(this->name);};		

const std::string &ASpell::getEffects() const{return(this->effects);};		
		
void ASpell::setEffects(const std::string &e){ this->effects = e;};

void ASpell::launch(const ATarget &target) const{ target.getHitBySpell(*this);};
