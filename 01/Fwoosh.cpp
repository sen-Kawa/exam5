#include "Fwoosh.hpp"

Fwoosh* Fwoosh::Clone()
{
	return (new Fwoosh(*this));
}

Fwoosh::Fwoosh(void)
{
	this->name = "Fwoosh";
	this->effects= "fwooshed";
	return ;
}

Fwoosh::~Fwoosh()
{
	return ;
}
