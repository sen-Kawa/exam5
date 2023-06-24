#include "ATarget.hpp"

std::string const& ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const& spell)
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::ATarget(std::string const type) : type(type)
{
	return ;
}

ATarget::ATarget(ATarget const& obj)
{
	type = obj.type;
	return ;
}

ATarget& ATarget::operator=(ATarget const& rhs)
{
	type = rhs.type;
	return (*this);
}

ATarget::ATarget()
{
	return ;
}

ATarget::~ATarget()
{
	return ;
}
