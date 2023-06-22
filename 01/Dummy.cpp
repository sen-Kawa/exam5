#include "Dummy.hpp"

Dummy* Dummy::Clone()
{
	return (new Dummy(*this));
}

Dummy::Dummy()
{
	this->type = "Target Practice Dummy";
	return ;
}

Dummy::~Dummy()
{
	return ;
}
