#include "ATarget.hpp"

const std::string& ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const& ref) const
{
	std::cout << type << " has been " << ref.getEffects() << "!" << std::endl;
}

ATarget::ATarget(std::string type) : type(type)
{
	return ;
}

ATarget::~ATarget()
{
	return ;
}
