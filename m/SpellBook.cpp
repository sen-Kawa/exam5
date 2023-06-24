#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell* newSpell)
{
	if (spells.count(newSpell->getName()) == 0)
		spells[newSpell->getName()] = newSpell->clone();
}

void SpellBook::forgetSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
		spells.erase(nameSpell);
}

ASpell* SpellBook::createSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
		return spells[nameSpell]->clone();
	else
		return (NULL);
}

SpellBook::SpellBook(SpellBook const& obj)
{
	spells = obj.spells;
	return ;
}

SpellBook& SpellBook::operator=(SpellBook const& rhs)
{
	spells = rhs.spells;
	return (*this);
}

SpellBook::SpellBook()
{
	return ;
}

SpellBook::~SpellBook()
{
	return ;
}
