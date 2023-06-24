#include "ASpell.hpp"

std::string const& ASpell::getName() const
{
	return (name);
}

std::string const& ASpell::getEffects() const
{
	return (effects);
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

ASpell::~ASpell()
{
	return ;
}

ASpell::ASpell(std::string const name, std::string const effects) : name(name), effects(effects)
{
	return ;
}

ASpell::ASpell(ASpell const& obj)
{
	name = obj.name;
	effects = obj.effects;
}

ASpell& ASpell::operator=(ASpell const& rhs)
{
	name = rhs.name;
	effects = rhs.effects;
	return (*this);
}
