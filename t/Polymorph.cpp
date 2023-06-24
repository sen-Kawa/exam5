#include "Polymorph.hpp"

Polymorph* Polymorph::clone() const
{
	return (new Polymorph());
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
