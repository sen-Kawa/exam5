#include "ATarget.hpp"

std::string const& ATarget::getType() const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const& target) const
{
	std::cout << type << " has been " << target.getEffects() << "!" << std::endl;
}


ATarget::ATarget()
{
	type = "notype";
	return ;
}

ATarget::ATarget(std::string const type) : type(type)
{
	return ;
}

ATarget::~ATarget()
{
	return ;
}

ATarget::ATarget(ATarget const& obj)
{
	type = obj.type;
	return ;
}

ATarget& ATarget::operator=(const ATarget &rhs)
{
	(void) rhs;
	return(*this) ;
}
