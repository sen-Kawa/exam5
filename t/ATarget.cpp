#include "ATarget.hpp"

std::string const& ATarget::getType() const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const& ref)
{
	std::cout << type << " has been " << ref.getEffects() << std::endl;
}

ATarget::ATarget()
{
	type = "notype";
	return ;
}

ATarget::~ATarget()
{
	return ;
}

ATarget::ATarget(std::string const type) : type(type)
{
	return ;
}

ATarget::ATarget(ATarget const& obj)
{
	type = obj.type;
}

ATarget& ATarget::operator=(ATarget const& rhs)
{
	type = rhs.type;
	return (*this);
}
