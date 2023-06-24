#include "Fireball.hpp"

Fireball* Fireball::clone() const
{
	return (new Fireball());
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
