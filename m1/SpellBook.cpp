#include "SpellBook.hpp"
#include "ATarget.hpp"

void SpellBook::learnSpell(ASpell* newSpell)
{
	if (spells.count(newSpell->getName()) == 0)
	{
		this->spells[newSpell->getName()] = newSpell->Clone();
	}
}

void SpellBook::forgetSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
		this->spells.erase(nameSpell);
}

ASpell* SpellBook::createSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
		return (spells[nameSpell]->Clone());
	else
		return (NULL);
}

SpellBook::SpellBook()
{
	return ;
}

SpellBook::~SpellBook()
{
	return ;
}

SpellBook::SpellBook(SpellBook const& obj)
{
	spells = obj.spells;
	return ;
}

SpellBook& SpellBook::operator=(const SpellBook &rhs)
{
	spells = rhs.spells;
	return(*this) ;
}
