#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(const TargetGenerator &orig){ *this = orig;};

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &orig){ (void)orig;/*copies the ll book*/return(*this);};

TargetGenerator::TargetGenerator(){};

TargetGenerator::~TargetGenerator(){

	std::vector<ATarget *>::iterator iter;
	for (iter = objectives.begin(); iter != objectives.end();++iter )
	{
	std::cout << "to delete:::::::::::::!" << (*iter)->getType() << std::endl;
		
		delete *iter;
	};
	this->objectives.clear();
};

void TargetGenerator::learnTargetType(ATarget *t){
	if(t)
        objectives.push_back(t->clone());

};

void TargetGenerator::forgetTargetType(std::string const &target){
	
	std::vector<ATarget *>::iterator iter;

    for (iter = this->objectives.begin(); iter != this->objectives.end(); )
    {
        if((*iter)->getType() == target )
        {
            delete *iter;
            iter = objectives.erase(iter);
        }
        else
            iter++;
    };
};

 ATarget* TargetGenerator::createTarget(std::string const &target){
	
	std::vector<ATarget *>::iterator iter;

    for (iter = objectives.begin(); iter != objectives.end() ; iter++)
    {
        if(target	== (*iter)->getType() )
        {
            return((*iter)->clone());//clone????????????????
        }
    };
    return (0);
};


