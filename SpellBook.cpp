
#include "SpellBook.hpp"


SpellBook::SpellBook(const SpellBook &orig){ *this = orig; };
		
SpellBook &SpellBook::operator=(const SpellBook &orig){ (void)orig;/*copies the ll book*/return(*this);};
		
SpellBook::SpellBook(){};

SpellBook::~SpellBook(){ 

	std::vector<ASpell *>::iterator iter;
	for (iter = book.begin(); iter != book.end(); ++iter)
	{
		delete *iter;
	};
	book.clear();
};

void SpellBook::learnSpell(ASpell *s){
	if(s)
		book.push_back(s->clone());
};	

void SpellBook::forgetSpell(std::string const &spell){
		
	std::vector<ASpell *>::iterator iter;

	for (iter = this->book.begin(); iter != this->book.end(); )
	{
		if((*iter)->getName() == spell )
		{	
			delete *iter;
			iter = book.erase(iter);
		}
		else 
			iter++;
	};
};
		
		
ASpell *SpellBook::createSpell(std::string const &spell){

	std::vector<ASpell *>::iterator iter;

	for (iter = book.begin(); iter != book.end() ; iter++)
	{
		if(spell == (*iter)->getName() )
		{
			return((*iter));//clone????????????????
		}
	};
	return (0);
};


