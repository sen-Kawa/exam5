#include "ASpell.hpp"

std::string ASpell::getName() const
{
	return (this->name);
}

std::string ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const& ref) const
{
	ref.getHitBySpell(*this);
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{
	return ;
}

ASpell::~ASpell()
{
	return ;
}
