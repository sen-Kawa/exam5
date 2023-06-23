#include "Fireball.hpp"

Fireball* Fireball::Clone()
{
	return (new Fireball(*this));
}

Fireball::Fireball()
{
	name = "Fireball";
	effects = "burnt to a crisp";
	return ;
}

Fireball::~Fireball()
{
	return ;
}
