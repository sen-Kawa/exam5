#include "Warlock.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

void Warlock::learnSpell(ASpell* newSpell)
{
	spellBook.learnSpell(newSpell);
}

void Warlock::forgetSpell(std::string nameSpell)
{
	spellBook.forgetSpell(nameSpell);
}

void Warlock::launchSpell(std::string nameSpell, ATarget& target)
{
	ASpell* spell = spellBook.createSpell(nameSpell);
	if (spell != NULL)
	{
		spell->launch(target);
		delete spell;
	}
}

const std::string& Warlock::getName() const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string& newTitle)
{
	title = newTitle;
}

void Warlock::introduce() const
{
		std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock()
{
	return ;
}

Warlock::Warlock(std::string const name, std::string const title) : name(name), title(title)
{
	SpellBook spellBook;
	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	return ;
}

Warlock::Warlock(Warlock const& obj)
{
	*this = obj;
	return ;
}

Warlock& Warlock::operator=(const Warlock &rhs)
{
	(void)rhs;
	return(*this) ;
}
