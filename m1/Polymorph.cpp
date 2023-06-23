#include "Polymorph.hpp"

Polymorph* Polymorph::Clone()
{
	return (new Polymorph(*this));
}

Polymorph::Polymorph()
{
	name = "Polymorph";
	effects = "turned into a critter";
	return ;
}

Polymorph::~Polymorph()
{
	return ;
}
