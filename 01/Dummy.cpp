
#include "Dummy.hpp"
		
Dummy::Dummy() { this->type = "Target Practice Dummy"; };

Dummy::~Dummy(){};

ATarget *Dummy::clone(){  return (new Dummy(*this));};


