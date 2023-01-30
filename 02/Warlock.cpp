#include "Warlock.hpp"


Warlock::Warlock(){};

Warlock::~Warlock(){

	std::cout << this->getName() << ": My job here is done!" << std::endl;
	//system("leaks a.out");
};

Warlock::Warlock(const Warlock &orig){ *this = orig;};
		
Warlock &Warlock::operator=(const Warlock &orig){ this->name = orig.getName(); this->title = orig.getTitle(); return(*this); };


Warlock::Warlock(const std::string n, const std::string t): name(n), title(t){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;

};
		
const std::string &Warlock::getName() const { return(this->name);};
		
const std::string &Warlock::getTitle() const { return(this->title);};

void Warlock::setTitle(const std::string &t) { this->title = t;};

void Warlock::introduce() const {
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
};
		
void Warlock::learnSpell(const ASpell *s){
	
	mybook.learnSpell(s);
};
		
void Warlock::forgetSpell(const std::string &s){

	mybook.forgetSpell(s);
};

void Warlock::launchSpell(const std::string &s, const ATarget &t){
	ASpell *aux = mybook.createSpell(s);			
	if(aux)
	{
		aux->launch(t);
		delete aux;
	};
};
