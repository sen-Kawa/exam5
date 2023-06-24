#include "Fwoosh.hpp"

Fwoosh* Fwoosh::clone()
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
