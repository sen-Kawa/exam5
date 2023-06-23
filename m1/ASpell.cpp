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

ASpell::ASpell()
{
	name = "noname";
	effects = "noeffects";
	return ;
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{
	return ;
}

ASpell::~ASpell()
{
	return ;
}

ASpell::ASpell(ASpell const& obj)
{
	this->name = obj.name;
	this->effects = obj.effects;
	return ;
}

ASpell& ASpell::operator=(const ASpell &rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return(*this) ;
}
