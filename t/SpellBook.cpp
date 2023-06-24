#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell* newSpell)
{
	if (spells.count(newSpell->getName()) == 0)
		spells[newSpell->getName()] = newSpell->clone();
}

void SpellBook::forgetSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
	{
		delete spells[nameSpell];
		spells.erase(nameSpell);
	}
}

ASpell* SpellBook::createSpell(std::string const& nameSpell)
{
	if (spells.count(nameSpell) > 0)
		return spells[nameSpell]->clone();
	return NULL;
}

SpellBook::SpellBook()
{
	return ;
}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = spells.begin();
	std::map<std::string, ASpell*>::iterator ite = spells.end();
	while (it != ite)
	{
		delete it->second;
		it++;
	}
	return ;
}

SpellBook::SpellBook(SpellBook const& obj)
{
	spells = obj.spells;
}

SpellBook& SpellBook::operator=(SpellBook const& rhs)
{
	spells = rhs.spells;
	return (*this);
}
