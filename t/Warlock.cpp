#include "Warlock.hpp"

void Warlock::learnSpell(ASpell* newSpell)
{
	if (spells.count(newSpell->getName()) == 0)
		spells[newSpell->getName()] = newSpell->clone();
}

void Warlock::forgetSpell(std::string nameSpell)
{
	if (spells.count(nameSpell) > 0)
	{
		delete spells[nameSpell];
		spells.erase(nameSpell);
	}
}

void Warlock::launchSpell(std::string nameSpell, ATarget& target)
{
	if (spells.count(nameSpell) > 0)
		spells[nameSpell]->launch(target);
}

std::string const& Warlock::getName() const
{
	return (name);
}

std::string const& Warlock::getTitle() const
{
	return (title);
}

void Warlock::setTitle(std::string const& newTitle)
{
	title = newTitle;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock()
{
	name = "noname";
	title = "notitle";
	return ;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	return ;
}

Warlock::Warlock(std::string const name, std::string const title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::Warlock(Warlock const& obj)
{
	name = obj.name;
	title = obj.title;
}

Warlock& Warlock::operator=(Warlock const& rhs)
{
	name = rhs.name;
	title = rhs.title;
	return (*this);
}
