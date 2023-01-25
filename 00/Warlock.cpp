#include "Warlock.hpp"


Warlock::Warlock(){};

Warlock::Warlock(const Warlock &orig){ *this = orig;};

const Warlock &Warlock::operator=(const Warlock &orig){ 
	this->name = orig.getName(); 
	this->title = orig.getTitle(); 
	return (*this);
};

Warlock::Warlock(std::string n, std::string t): name(n), title(t){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
};

Warlock::~Warlock(){
	std::cout << this->getName() << ": My job here is done!" << std::endl;
};

const std::string Warlock::getName() const { return (this->name); };
		
const std::string Warlock::getTitle() const { return (this->title); };
	
void Warlock::setTitle(const std::string t){ this->title = t;};

void Warlock::introduce() const { 
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
};
