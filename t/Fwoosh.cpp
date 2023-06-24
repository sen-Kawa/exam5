#include "Fwoosh.hpp"

Fwoosh* Fwoosh::clone() const
{
	return (new Fwoosh());
}

Fwoosh::Fwoosh()
{
	name = "Fwoosh";
	effects = "fwooshed";
	return ;
}

Fwoosh::~Fwoosh()
{
	return ;
}
