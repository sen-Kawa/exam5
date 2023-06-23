#include "Dummy.hpp"

Dummy* Dummy::clone()
{
	return (new Dummy(*this));
}

Dummy::Dummy()
{
	type = "Target Practice Dummy";
	return ;
}

Dummy::~Dummy()
{
	return ;
}
