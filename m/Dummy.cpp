#include "Dummy.hpp"

Dummy* Dummy::clone()
{
	return (new Dummy());
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
