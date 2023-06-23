#include "Fwoosh.hpp"

Fwoosh* Fwoosh::Clone()
{
	return (new Fwoosh(*this));
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
