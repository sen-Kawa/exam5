#include "Fwoosh.hpp"

Fwoosh* Fwoosh::Clone()
{
	return (new Fwoosh(*this));
}

Fwoosh::Fwoosh()
{
	this->name = "Fwoosh";
	this->effects= "fwooshed";
	return ;
}

Fwoosh::~Fwoosh()
{
	return ;
}
