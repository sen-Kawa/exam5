#include "ASpell.hpp"

std::string const& ASpell::getName() const
{
	return (this->name);
}

std::string const& ASpell::getEffects() const
{
	return (this->effects);
}

ASpell::ASpell(std::string const name, std::string const effects) : name(name), effects(effects)
{
	return ;
}

ASpell::ASpell(ASpell const& obj)
{
	name = obj.name;
	effects = obj.effects;
	return ;
}

ASpell& ASpell::operator=(ASpell const& rhs)
{
	name = rhs.name;
	effects = rhs.effects;
	return (*this);
}

ASpell::ASpell()
{
	return ;
}

ASpell::~ASpell()
{
	return ;
}
