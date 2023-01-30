#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(const TargetGenerator &orig){ *this = orig;};

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &orig){ 
(void)orig;
return(*this);
};

		
TargetGenerator::TargetGenerator(){};
	
TargetGenerator::~TargetGenerator(){
	std::vector<ATarget *>::iterator i;

	for( i = objectives.begin(); i != objectives.end(); ++i)
	{
		delete *i;
	};
	this->objectives.clear();

};
		
void TargetGenerator::learnTargetType(ATarget *t){
	if(t)
	{
		std::vector<ATarget *>::iterator i;

		for( i = objectives.begin(); i != objectives.end(); ++i)
		{
			if(t->getType() == (*i)->getType())
				return;
		};
		objectives.push_back(t->clone());
	};

};
		
void TargetGenerator::forgetTargetType(std::string const &t){
std::vector<ATarget *>::iterator i;

	for( i = objectives.begin(); i != objectives.end();)
	{
		if(t == (*i)->getType())
		{	
			delete *i;
			i = objectives.erase(i); 
		}
		else
			++i;
	};

};
		
ATarget *TargetGenerator::createTarget(std::string const &t){
	std::vector<ATarget *>::iterator i;

	for( i = objectives.begin(); i != objectives.end(); ++i)
	{	if(t== (*i)->getType())
			return((*i)->clone());
	};
	return (nullptr);
};
		







