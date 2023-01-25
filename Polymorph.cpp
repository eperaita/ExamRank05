

#include "Polymorph.hpp"


Polymorph::Polymorph(){ this->name = "Polymorph"; this->effects = "burnt to a crisp"; };

Polymorph::~Polymorph(){};

ASpell *Polymorph::clone(){ return (new Polymorph(*this)); }

