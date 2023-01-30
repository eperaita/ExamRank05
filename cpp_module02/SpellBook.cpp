#include "SpellBook.hpp"


SpellBook::SpellBook(const SpellBook &orig){ *this = orig;};
		
SpellBook &SpellBook::operator=(const SpellBook &orig){ 

	(void)orig;
	return(*this);

};
		
SpellBook::SpellBook(){};
		
SpellBook::~SpellBook(){

	std::vector<ASpell *>::iterator i;

	for( i = book.begin(); i != book.end(); ++i)
	{
		delete *i;
	}
	this->book.clear();


};


void SpellBook::learnSpell(const ASpell *s){

	if(s)
	{
		std::vector<ASpell *>::iterator i;

		for( i = book.begin(); i != book.end(); ++i)
		{
			if(s->getName() == (*i)->getName())
				return;
		};
		book.push_back(s->clone());
	};
};

void SpellBook::forgetSpell(std::string s){
	std::vector<ASpell *>::iterator i;

	for( i = book.begin(); i != book.end();)
	{
		if(s == (*i)->getName())
		{	
			delete *i;
			i = book.erase(i); 
		}
		else
			++i;
	};

};

ASpell* SpellBook::createSpell(std::string s){
	std::vector<ASpell *>::iterator i;

	for( i = book.begin(); i != book.end(); ++i)
	{	if(s== (*i)->getName())
			return((*i)->clone());
	};
	return(nullptr);

};
